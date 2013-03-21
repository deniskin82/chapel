#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

/* System Headers */
#include <pthread.h>

#include <stdio.h>
#include <stdlib.h>

/* Internal Headers */
#include "qthread/qthread.h"
#include "qt_macros.h"
#include "qt_visibility.h"
#include "qthread_innards.h"
#include "qthread_asserts.h"
#include "qthread_prefetch.h"
#include "qt_threadqueues.h"
#include "qt_qthread_struct.h"
#include "qt_debug.h"

/* This thread queueing uses the NEMESIS lock-free queue protocol from
 * http://www.mcs.anl.gov/~buntinas/papers/ccgrid06-nemesis.pdf
 * Note: it is NOT SAFE to use with multiple de-queuers, it is ONLY safe to use
 * with multiple enqueuers and a single de-queuer. */

/* Data Structures */
struct _qt_threadqueue_node {
    struct _qt_threadqueue_node *next;
    qthread_t                   *thread;
};

typedef struct {
    /* The First Cacheline */
    void   *head;
    void   *tail;
    uint8_t pad1[CACHELINE_WIDTH - (2 * sizeof(void *))];
    /* The Second Cacheline */
    void   *shadow_head;
    /* the following is for estimating a queue's "busy" level, and is not
     * guaranteed accurate (that would be a race condition) */
    saligned_t advisory_queuelen;
    uint8_t    pad2[CACHELINE_WIDTH - sizeof(void *) - sizeof(saligned_t)];
}
NEMESIS_queue Q_ALIGNED (CACHELINE_WIDTH);

struct _qt_threadqueue {
    NEMESIS_queue q;
    /* the following is for estimating a queue's "busy" level, and is not
     * guaranteed accurate (that would be a race condition) */
    saligned_t      advisory_queuelen;
#ifdef QTHREAD_CONDWAIT_BLOCKING_QUEUE
    uint32_t        frustration;
    pthread_cond_t  trigger;
    pthread_mutex_t trigger_lock;
#endif
} /* qt_threadqueue_t */;

/* Memory Management */
#if defined(UNPOOLED_QUEUES) || defined(UNPOOLED)
# define ALLOC_THREADQUEUE() (qt_threadqueue_t *)MALLOC(sizeof(qt_threadqueue_t))
# define FREE_THREADQUEUE(t) FREE(t, sizeof(qt_threadqueue_t))
# define ALLOC_TQNODE()      (qt_threadqueue_node_t *)MALLOC(sizeof(qt_threadqueue_node_t))
# define FREE_TQNODE(t)      FREE(t, sizeof(qt_threadqueue_node_t))
void INTERNAL qt_threadqueue_subsystem_init(void) {}
#else /* if defined(UNPOOLED_QUEUES) || defined(UNPOOLED) */
qt_threadqueue_pools_t generic_threadqueue_pools = { NULL, NULL };
# define ALLOC_THREADQUEUE() (qt_threadqueue_t *)qt_mpool_alloc(generic_threadqueue_pools.queues)
# define FREE_THREADQUEUE(t) qt_mpool_free(generic_threadqueue_pools.queues, t)
# define ALLOC_TQNODE()      (qt_threadqueue_node_t *)qt_mpool_alloc(generic_threadqueue_pools.nodes)
# define FREE_TQNODE(t)      qt_mpool_free(generic_threadqueue_pools.nodes, t)

static void qt_threadqueue_subsystem_shutdown(void)
{
    qt_mpool_destroy(generic_threadqueue_pools.queues);
    qt_mpool_destroy(generic_threadqueue_pools.nodes);
}

void INTERNAL qt_threadqueue_subsystem_init(void)
{
    generic_threadqueue_pools.queues = qt_mpool_create(sizeof(qt_threadqueue_t));
    generic_threadqueue_pools.nodes  = qt_mpool_create_aligned(sizeof(qt_threadqueue_node_t), 8);
    qthread_internal_cleanup(qt_threadqueue_subsystem_shutdown);
}

#endif /* if defined(UNPOOLED_QUEUES) || defined(UNPOOLED) */

/* Thankfully, NEMESIS does not suffer from the ABA problem. */

qt_threadqueue_t INTERNAL *qt_threadqueue_new(void)
{                                      /*{{{ */
    qt_threadqueue_t *q = ALLOC_THREADQUEUE();

    qassert_ret(q != NULL, NULL);

    q->q.shadow_head     = q->q.head = q->q.tail = NULL;
    q->advisory_queuelen = 0;
#ifdef QTHREAD_CONDWAIT_BLOCKING_QUEUE
    q->frustration = 0;
    {
        pthread_mutexattr_t ma;
        qassert(pthread_mutexattr_init(&ma), 0);
        qassert(pthread_mutexattr_setpshared(&ma, PTHREAD_PROCESS_PRIVATE), 0);
        qassert(pthread_mutex_init(&q->trigger_lock, &ma), 0);
        qassert(pthread_mutexattr_destroy(&ma), 0);
    }
    {
        pthread_condattr_t ca;
        qassert(pthread_condattr_init(&ca), 0);
        qassert(pthread_condattr_setpshared(&ca, PTHREAD_PROCESS_PRIVATE), 0);
        qassert(pthread_cond_init(&q->trigger, &ca), 0);
        qassert(pthread_condattr_destroy(&ca), 0);
    }
#endif /* ifdef QTHREAD_CONDWAIT_BLOCKING_QUEUE */

    return q;
}                                      /*}}} */

static inline qt_threadqueue_node_t *qt_internal_NEMESIS_dequeue(NEMESIS_queue *q)
{                                      /*{{{ */
    qt_threadqueue_node_t *retval;

    if (!q->shadow_head) {
        if (!q->head) {
            return NULL;
        }
        q->shadow_head = q->head;
        q->head        = NULL;
    }

    retval = q->shadow_head;

    if ((retval != NULL) && (retval != (void *)1)) {
        if (retval->next != NULL) {
            q->shadow_head = retval->next;
            retval->next   = NULL;
        } else {
            qt_threadqueue_node_t *old;
            q->shadow_head = NULL;
            old            = qthread_cas_ptr(&(q->tail), retval, NULL);
            if (old != retval) {
                while (retval->next == NULL) SPINLOCK_BODY();
                q->shadow_head = retval->next;
                retval->next   = NULL;
            }
        }
    }
    return retval;
}                                      /*}}} */

static qthread_t *qt_threadqueue_dequeue(qt_threadqueue_t *q)
{                                      /*{{{ */
    qt_threadqueue_node_t *node = qt_internal_NEMESIS_dequeue(&q->q);

    if (node) {
        qthread_t *retval = node->thread;
        assert(node->next == NULL);
        (void)qthread_incr(&(q->advisory_queuelen), -1);
        FREE_TQNODE(node);
        return retval;
    } else {
        return NULL;
    }
}                                      /*}}} */

void INTERNAL qt_threadqueue_free(qt_threadqueue_t *q)
{                                      /*{{{ */
    assert(q);
    while (qt_threadqueue_dequeue(q)) ;
#ifdef QTHREAD_CONDWAIT_BLOCKING_QUEUE
    QTHREAD_DESTROYLOCK(&q->trigger_lock);
    QTHREAD_DESTROYCOND(&q->trigger);
#endif
    FREE_THREADQUEUE(q);
}                                      /*}}} */

#ifdef QTHREAD_USE_SPAWNCACHE
int INTERNAL qt_threadqueue_private_enqueue(qt_threadqueue_private_t *restrict pq,
                                            qt_threadqueue_t *restrict         q,
                                            qthread_t *restrict                t)
{
    return 0;
}

int INTERNAL qt_threadqueue_private_enqueue_yielded(qt_threadqueue_private_t *restrict q,
                                                    qthread_t *restrict                t)
{
    return 0;
}

#endif /* ifdef QTHREAD_USE_SPAWNCACHE */

void INTERNAL qt_threadqueue_enqueue(qt_threadqueue_t *restrict q,
                                     qthread_t *restrict        t)
{                                      /*{{{ */
    qt_threadqueue_node_t *node, *prev;

    assert(q);
    assert(t);

    qthread_debug(THREADQUEUE_CALLS, "q(%p), t(%p->%u)\n", q, t, t->thread_id);

    node = ALLOC_TQNODE();
    assert(node != NULL);
    node->thread = t;
    node->next   = NULL;

    prev = qt_internal_atomic_swap_ptr((void **)&(q->q.tail), node);

    if (prev == NULL) {
        q->q.head = node;
    } else {
        prev->next = node;
    }
    (void)qthread_incr(&(q->advisory_queuelen), 1);
#ifdef QTHREAD_CONDWAIT_BLOCKING_QUEUE
    /* awake waiter */
    /* Yes, this needs to be here, to prevent reading frustration being hoisted
     * to before the enqueue operations. */
    MACHINE_FENCE;
    if (q->frustration) {
        qassert(pthread_mutex_lock(&q->trigger_lock), 0);
        if (q->frustration) {
            q->frustration = 0;
            qassert(pthread_cond_signal(&q->trigger), 0);
        }
        qassert(pthread_mutex_unlock(&q->trigger_lock), 0);
    }
#endif /* ifdef QTHREAD_CONDWAIT_BLOCKING_QUEUE */
}                                      /*}}} */

void INTERNAL qt_threadqueue_enqueue_yielded(qt_threadqueue_t *restrict q,
                                             qthread_t *restrict        t)
{                                      /*{{{ */
    qt_threadqueue_enqueue(q, t);
}                                      /*}}} */

ssize_t INTERNAL qt_threadqueue_advisory_queuelen(qt_threadqueue_t *q)
{                                      /*{{{ */
    assert(q);
    return q->advisory_queuelen;
}                                      /*}}} */

qthread_t INTERNAL *qt_scheduler_get_thread(qt_threadqueue_t         *q,
                                            qt_threadqueue_private_t *QUNUSED(qc),
                                            uint_fast8_t              QUNUSED(active))
{                                      /*{{{ */
    qt_threadqueue_node_t *node = qt_internal_NEMESIS_dequeue(&q->q);
    qthread_t             *retval;

    if (node == NULL) {
        while (q->q.shadow_head == NULL && q->q.head == NULL) {
#ifndef QTHREAD_CONDWAIT_BLOCKING_QUEUE
            SPINLOCK_BODY();
#else
            if (qthread_incr(&q->frustration, 1) > 1000) {
                qassert(pthread_mutex_lock(&q->trigger_lock), 0);
                if (q->frustration > 1000) {
                    qassert(pthread_cond_wait(&q->trigger, &q->trigger_lock),
                            0);
                }
                qassert(pthread_mutex_unlock(&q->trigger_lock), 0);
            }
#endif      /* ifdef USE_HARD_POLLING */
        }
        node = qt_internal_NEMESIS_dequeue(&q->q);
    }
    assert(node);
    assert(node->next == NULL);
    (void)qthread_incr(&(q->advisory_queuelen), -1);
    retval = node->thread;
    FREE_TQNODE(node);
    return retval;
}                                      /*}}} */

/* some place-holder functions */
void INTERNAL qthread_steal_stat(void)
{}

void INTERNAL qthread_steal_enable(void)
{}

void INTERNAL qthread_steal_disable(void)
{}

void INTERNAL qthread_cas_steal_stat(void)
{}

/* vim:set expandtab: */
