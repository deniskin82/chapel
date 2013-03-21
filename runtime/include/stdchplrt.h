/**************************************************************************
  Copyright (c) 2004-2012, Cray Inc.  (See LICENSE file for more details)
**************************************************************************/


#ifndef _stdchplrt_H_
#define _stdchplrt_H_

/* This is similar to stdchpl.h, but pared down for the runtime
   Chapel code -- in particular, things like chplcgfns.h are not
   needed for the generated runtime code, and cause problems. */

#include "sys_basic.h"

#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include <chpl-comm-printf-macros.h>

#include "chplcast.h"
#include "chplio.h"
#include "chpl-mem.h"
#include "chplrt.h"
#include "chpl-tasks.h"
#include "chpltimers.h"
#include "chpltypes.h"
#include "error.h"

#include "qbuffer.h"
#include "qio.h"
#include "qio_formatted.h"
#include "bulkget.h"
#include "chplgmp.h"

#endif
