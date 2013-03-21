#ifndef QT_FEB_BARRIER_H
#define QT_FEB_BARRIER_H

#include <qthread/macros.h>

Q_STARTCXX
typedef struct qt_feb_barrier_s qt_feb_barrier_t;

qt_feb_barrier_t *qt_feb_barrier_create(size_t max_threads);
void              qt_feb_barrier_enter(qt_feb_barrier_t *b);
void              qt_feb_barrier_destroy(qt_feb_barrier_t *b);
void              qt_feb_barrier_resize(size_t new_max_threads);
Q_ENDCXX

#endif // ifndef QT_FEB_BARRIER_H
/* vim:set expandtab: */
