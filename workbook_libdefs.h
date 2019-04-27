#ifndef _WORKBOOK_LIBDEFS_H
#define _WORKBOOK_LIBDEFS_H

#include <exec/types.h>

#define GM_UNIQUENAME(n) Workbook_ ## n
#define LIBBASE          WorkbookBase
#define LIBBASETYPE      struct Library
#define LIBBASETYPEPTR   struct Library *
#define MOD_NAME_STRING  "workbook"
#define VERSION_NUMBER   44
#define MAJOR_VERSION    44
#define REVISION_NUMBER  0
#define MINOR_VERSION    0
#define VERSION_STRING   "$VER: workbook 45.0 (24.4.2019)\r\n"
#define COPYRIGHT_STRING "(c) Jaroslaw Kuczynski"
#define LIBEND           GM_UNIQUENAME(End)
#define LIBFUNCTABLE     GM_UNIQUENAME(FuncTable)
#define RESIDENTPRI      -123
#define RESIDENTFLAGS    RTF_AFTERDOS
#define FUNCTIONS_COUNT  0
#include "workbook_intern.h"

#endif /* _WORKBOOK_LIBDEFS_H */
