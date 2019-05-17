//
// Created by jarokuczi on 17/05/19.
//

#include <libraries>
#include "WorkbookNg.h"

AROS_LH2(char*, RequestText,
         AROS_LHA(char**, a, A0),
         AROS_LHA(char**, a, A1),
         AROS_LHA(char**, a, A2),
         AROS_LHA(struct WorkbookBase*, a, A3),
         AROS_LHA(STRPTR, b, A0),
         struct Library *, WorkbookNgBase, 9, Mylib
)
    {
        AROS_LIBFUNC_INIT

            ...

    AROS_LIBFUNC_EXIT
}


//char *RequestText(char windowTitle[], char inputLabel[], char buttonTitle[], struct WorkbookBase *wbBase)