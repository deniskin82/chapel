#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <err.h>
#include <time.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "common_rcrtool.h"
#include "qt_rcrtool.h"
#include "bcGen.h"
#include "blackboard.h"

int rcrToolContinue = 1;
typedef struct _parallelRegion{
    void (*func) (void *);
    const char* funcName;
    unsigned int entryNum;
} parallelRegion;

#define LATENCYTEST 10000

#define AMD_OPTERON

/*!
 * Complain with perror, then exit.
 * 
 * \param msg Nature of the problem (don't include newline)
 */
void die(char* msg) {
    perror(msg);
    exit(EXIT_FAILURE);
}

/*!
 * 
 */
volatile int foo;
void doWork(int nshepherds, int nworkerspershep) {

    // get the blackboard once and use for the life of RCRdaemon
    struct _RCRBlackboard* bb = (struct _RCRBlackboard*)getShmBlackboardRO();
    if (!bb) {
      //error
      printf("shmdt failed. Can not get BB Shared Memory.\n");
      return;
    }

    while (rcrToolContinue) {

      struct RCRNode*   firstNode   = (struct RCRNode*)  (&bb[1]);
      long t = (long)firstNode - (long)bb;

      t = (long)bb + 0x47f90; // SERIOUS MAGIC NUMBER to step over all of the C++ stuff in the header not in
                              // our C header file -- works on MMQ at RENCI need better mechanism in the 
                              // future AKP 01/13/12
      firstNode = (struct RCRNode*)t;
      struct RCRSocket* firstSocket = (struct RCRSocket*)(&firstNode[bb->numOfNodes]);
      struct RCRCore*   firstCore   = (struct RCRCore*)  (&firstSocket[bb->numOfSockets]);
      struct RCRMeter*  firstMeter  = (struct RCRMeter*) (&firstCore[bb->numOfCores]);
      struct RCRMeter*  socketMeter = firstMeter;
      struct RCRMeter*  coreMeter   = &(firstMeter[bb->numOfSockets * S_NUMBER_OF_SOCKET_METERS]);
      
      int sm, cm;
      int highCnt = 0;
      int midCnt = 0;
      int lowCnt = 0;

      throwTrigger(APPSTATESHMKEY, T_TYPE_CORE, T_TYPE_LOW, 0, 0); // high aggressive 
      
      for (sm = 0; sm < bb->numOfSockets * S_NUMBER_OF_SOCKET_METERS; sm++) {
	if (socketMeter[sm].enable) {
	  if (socketMeter[sm].current > socketMeter[sm].lBound) {  // not low
	    midCnt++;
	  }
	  else{ // low
	    lowCnt++;
	  }

	  if (socketMeter[sm].current > socketMeter[sm].uBound) {
	    throwTrigger(APPSTATESHMKEY, T_TYPE_SOCKET,
			 T_TYPE_HIGH, sm / S_NUMBER_OF_SOCKET_METERS, sm);
	    highCnt++;
	    //	    printf("sm %d bound %f value %f\n",sm, socketMeter[sm].uBound, socketMeter[sm].current);
	    break;
	  }
	}

      }
      if (highCnt) {
	throwTrigger(APPSTATESHMKEY, T_TYPE_SOCKET,
		     T_TYPE_HIGH, sm / S_NUMBER_OF_SOCKET_METERS, sm);
      }
      else {
	if (midCnt == 0) {
	  for (cm = 0; cm < bb->numOfCores * C_NUMBER_OF_CORE_METERS; cm++) {
	    if (coreMeter[cm].enable) {
	      if (coreMeter[cm].current < coreMeter[cm].lBound) {
	        midCnt++;
	      }
	      else {
		lowCnt++;
	      }
	      if (coreMeter[cm].current > coreMeter[cm].uBound) {
		highCnt++;
		//printf("\t\t cm %d bound %f value %f\n", cm, coreMeter[cm].uBound, coreMeter[cm].current);
		break;
	      }
	    }
	  }
	  if (highCnt) {
	    throwTrigger(APPSTATESHMKEY, T_TYPE_CORE,
			 T_TYPE_HIGH, cm / C_NUMBER_OF_CORE_METERS, sm + cm);
	  }
	}  
      }
      //  if (midCnt == 0) {
      //if (!highCnt) {  // low aggressive
      //if (!highCnt && lowCnt) {
      if ( lowCnt) { // this gives us the medium aggressive case
	    throwTrigger(APPSTATESHMKEY, T_TYPE_CORE, T_TYPE_LOW, sm, sm);
      }
#ifdef QTHREAD_RCRTOOL
      int dummySocketOrCoreID = 0;
      if (rcrtoolloglevel >= RCR_APP_STATE_DUMP_ALWAYS) {
	dumpAppState(APPSTATESHMKEY, T_TYPE_SOCKET, dummySocketOrCoreID);
      }
#endif
      {
	//struct timespec interval, remainder;
	//interval.tv_sec = 0;
	//interval.tv_nsec = 5000000;
	//	nanosleep(&interval, &remainder);
	foo = 1000000; // use hard countdown -- nanosleep seems to give interesting results
	while (--foo);
      }
    }

    throwTrigger(APPSTATESHMKEY, T_TYPE_CORE, T_TYPE_LOW, 0, 0); // release any throttled threads

    if(shmdt(bb) == -1){  // Release Shared Memory region when shutting down - akp
      printf("shmdt failed\n");
      return;
    }
    clearAppState();
}
