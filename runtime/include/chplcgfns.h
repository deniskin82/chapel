/**************************************************************************
  Copyright (c) 2004-2012, Cray Inc.  (See LICENSE file for more details)
**************************************************************************/


#ifndef _CHPL_GEN_INTERFACE_H_
#define _CHPL_GEN_INTERFACE_H_

#include <stdlib.h>
#include "chpltypes.h"

/* This header file is for routines that are in the generated code */

/* defined in chpl__header.h: */

extern int64_t numThreadsPerLocale;
extern int32_t chpl__maxThreadsPerLocale;
extern int64_t callStackSize;

/* generated */
void chpl__init_preInit(int64_t _ln, chpl_string _fn);
void chpl__init_ChapelThreads(int64_t _ln, chpl_string _fn);
void chpl__init_ChapelStandard(int64_t _ln, chpl_string _fn);

/* used for entry point: */
extern void chpl_gen_main(void);

/* used for config vars: */
extern void CreateConfigVarTable(void);

/* used by copy collection: */

//extern size_t cid2size(chpl__class_id cid);
//extern size_t* cid2offsets(chpl__class_id cid);

/* These are defined in _type_structure.c if
   --gen-communicated-structures is true and are used by a
   communication layer to query types of communicated buffers */
extern chplType chpl_getFieldType(int typeNum, int fieldNum);
extern size_t chpl_getFieldOffset(int typeNum, int fieldNum);
extern size_t chpl_getFieldSize(int typeNum);
extern const int chpl_max_fields_per_type;

#endif
