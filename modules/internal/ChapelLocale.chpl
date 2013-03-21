// Copyright (c) 2004-2012, Cray Inc.  (See LICENSE file for more details)


// ChapelLocale.chpl
//
pragma "no use ChapelStandard"
module ChapelLocale {

use DefaultRectangular;

// would like this to be the following, but it breaks about 20 tests:
//const LocaleSpace: domain(1) distributed(OnePer) = [0..numLocales-1];
const LocaleSpace: domain(1) = {0..numLocales-1};

var doneCreatingLocales: bool;

class locale {
  const chpl_id: int;
  const numCores: int;

  proc locale(id = -1) {
    if doneCreatingLocales {
      halt("locales cannot be created");
    }
    chpl_id = id;

    extern proc chpl_numCoresOnThisLocale(): int;
    numCores = chpl_numCoresOnThisLocale();
  }

  proc id {
    return chpl_id;
  }

  proc name {
    var locName: string;
    on this do locName = __primitive("chpl_localeName");
    return locName;
  }

  proc callStackSize: int {
    // Locales may have differing call stack sizes.
    extern proc chpl_task_getCallStackSize(): int;
    var retval: int;
    on this do retval = chpl_task_getCallStackSize();
    return retval;
  }

  proc readWriteThis(f) {
    f <~> new ioLiteral("LOCALE") <~> chpl_id;
  }
}

pragma "private" var _here: locale;

proc here return _here;

// Perform locale-specific initialization.
// This is where global variables declared 'pragma "private"' are initialized.
// That initialization is not currently arranged automatically by the compiler.
proc chpl_setupLocale(id) {
  var tmp: locale;
  on __primitive("chpl_on_locale_num", id) {
    tmp = new locale(id);
    _here = tmp;
    if (defaultDist._value == nil) {
      defaultDist = new dmap(new DefaultDist());
    }
  }
  return tmp;
}

const Locales: [LocaleSpace] locale;
// We cannot use a forall here because the default leader iterator will
// access data structures that are not yet initialized (i.e., Locales
// array/here).  An alternative would be to use a coforall+on and refactor
// chpl_setupLocale().
for loc in LocaleSpace do
  Locales(loc) = chpl_setupLocale(loc);

doneCreatingLocales = true;

//
// tree for recursive task invocation during privatization
//
record chpl_localeTreeRecord {
  var left, right: locale;
}
pragma "private" var chpl_localeTree: chpl_localeTreeRecord;

proc chpl_initLocaleTree() {
  for i in LocaleSpace {
    var left: locale = nil;
    var right: locale = nil;
    var child = (i+1)*2-1;
    if child < numLocales {
      left = Locales[child];
      child += 1;
      if child < numLocales then
        right = Locales[child];
    }
    on Locales(i) {
      chpl_localeTree.left = left;
      chpl_localeTree.right = right;
    }
  }
}

chpl_initLocaleTree();

//proc locale.numCores {
//  var numCores: int;
//  on this do numCores = __primitive("chpl_coresPerLocale");
//  return numCores;
//}

proc chpl_int_to_locale(id) {
  return Locales(id);
}


proc locale.totalThreads() {
  var totalThreads: int;

  on this do totalThreads = __primitive("chpl_numThreads");

  return totalThreads;
}

proc locale.idleThreads() {
  var idleThreads: int;

  on this do idleThreads = __primitive("chpl_numIdleThreads");

  return idleThreads;
}

proc locale.queuedTasks() {
  var queuedTasks: int;

  on this do queuedTasks = __primitive("chpl_numQueuedTasks");

  return queuedTasks;
}

proc locale.runningTasks() {
  var numTasks: int;

  on this do numTasks = __primitive("chpl_numRunningTasks");

  return numTasks;
}

proc locale.blockedTasks() {
  var blockedTasks: int;

  on this do blockedTasks = __primitive("chpl_numBlockedTasks");

  return blockedTasks;
}

proc chpl_getPrivatizedCopy(type objectType, objectPid:int): objectType
  return __primitive("chpl_getPrivatizedClass", nil:objectType, objectPid);


//
// multi-locale diagnostics/debugging support
//

// There should be a type like this declared in chpl-comm.h with a single
// function that returns the C struct.  We're not doing it that way yet
// due to some shortcomings in our extern records implementation.
// Once that gets sorted out, we can turn this into an extern record,
// and remove the 8 or so individual functions below that return the
// various counters.
extern record chpl_commDiagnostics {
  var get: uint(64);
  var get_nb: uint(64);
  var get_nb_test: uint(64);
  var get_nb_wait: uint(64);
  var put: uint(64);
  var fork: uint(64);
  var fork_fast: uint(64);
  var fork_nb: uint(64);
};

type commDiagnostics = chpl_commDiagnostics;

extern proc chpl_startVerboseComm();
extern proc chpl_stopVerboseComm();
extern proc chpl_startVerboseCommHere();
extern proc chpl_stopVerboseCommHere();
extern proc chpl_startCommDiagnostics();
extern proc chpl_stopCommDiagnostics();
extern proc chpl_startCommDiagnosticsHere();
extern proc chpl_stopCommDiagnosticsHere();
extern proc chpl_resetCommDiagnosticsHere();
extern proc chpl_getCommDiagnosticsHere(out cd: commDiagnostics);

proc startVerboseComm() { chpl_startVerboseComm(); }
proc stopVerboseComm() { chpl_stopVerboseComm(); }
proc startVerboseCommHere() { chpl_startVerboseCommHere(); }
proc stopVerboseCommHere() { chpl_stopVerboseCommHere(); }

proc startCommDiagnostics() { chpl_startCommDiagnostics(); }
proc stopCommDiagnostics() { chpl_stopCommDiagnostics(); }
proc startCommDiagnosticsHere() { chpl_startCommDiagnosticsHere(); }
proc stopCommDiagnosticsHere() { chpl_stopCommDiagnosticsHere(); }

proc resetCommDiagnostics() {
  for loc in Locales do on loc do
    resetCommDiagnosticsHere();
}

inline proc resetCommDiagnosticsHere() {
  chpl_resetCommDiagnosticsHere();
}

// See note above regarding extern records
extern proc chpl_numCommGets(): uint(64);
extern proc chpl_numCommNBGets(): uint(64);
extern proc chpl_numCommTestNBGets(): uint(64);
extern proc chpl_numCommWaitNBGets(): uint(64);
extern proc chpl_numCommPuts(): uint(64);
extern proc chpl_numCommForks(): uint(64);
extern proc chpl_numCommFastForks(): uint(64);
extern proc chpl_numCommNBForks(): uint(64);

proc getCommDiagnostics() {
  var D: [LocaleSpace] commDiagnostics;
  for loc in Locales do on loc {
    // See note above regarding extern records
    D(loc.id).get = chpl_numCommGets();
    D(loc.id).put = chpl_numCommPuts();
    D(loc.id).fork = chpl_numCommForks();
    D(loc.id).fork_fast = chpl_numCommFastForks();
    D(loc.id).fork_nb = chpl_numCommNBForks();
    D(loc.id).get_nb = chpl_numCommNBGets();
    D(loc.id).get_nb_test = chpl_numCommTestNBGets();
    D(loc.id).get_nb_wait = chpl_numCommWaitNBGets();
  }
  return D;
}

proc getCommDiagnosticsHere() {
  var cd: commDiagnostics;
  cd.get = chpl_numCommGets();
  cd.put = chpl_numCommPuts();
  cd.fork = chpl_numCommForks();
  cd.fork_fast = chpl_numCommFastForks();
  cd.fork_nb = chpl_numCommNBForks();
  cd.get_nb = chpl_numCommNBGets();
  cd.get_nb_test = chpl_numCommTestNBGets();
  cd.get_nb_wait = chpl_numCommWaitNBGets();
  return cd;
}

config const
  memTrack: bool = false,
  memStats: bool = false, 
  memLeaks: bool = false,
  memLeaksTable: bool = false,
  memMax: int = 0,
  memThreshold: int = 0,
  memLog: string = "";

pragma "no auto destroy"
config const
  memLeaksLog: string = "";

proc chpl_startTrackingMemory() {
  if Locales(0) == here {
    coforall loc in Locales {
      if loc == here {
        __primitive("chpl_setMemFlags", memTrack, memStats, memLeaks, memLeaksTable, memMax, memThreshold, memLog, memLeaksLog);
      } else on loc {
          __primitive("chpl_setMemFlags", memTrack, memStats, memLeaks, memLeaksTable, memMax, memThreshold, memLog, memLeaksLog);
      }
    }
  }
}

}
