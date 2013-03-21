/**************************************************************************
  Copyright (c) 2004-2012, Cray Inc.  (See LICENSE file for more details)
**************************************************************************/


#ifndef _arg_H_
#define _arg_H_

#include "sys_basic.h"
#include <stdint.h>
#include "chpltypes.h"

//
// defined in arg.c
//
extern int32_t blockreport;
extern int32_t taskreport;

void parseNumLocales(const char* numPtr, int32_t lineno, chpl_string filename);
void parseArgs(int* argc, char* argv[]);
int32_t getArgNumLocales(void);
int32_t chpl_baseUniqueLocaleID(int32_t r);
int _runInGDB(void);
int chpl_specify_locales_error(void);

//
// defined with main()
//
int handleNonstandardArg(int* argc, char* argv[], int argNum, 
                         int32_t lineno, chpl_string filename);
void printAdditionalHelp(void);

#endif
