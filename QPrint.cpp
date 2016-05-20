//
//  QPrint.cpp
//  Client
//
//  Created by 凉鞋 on 16/2/10.
//
//

#include "QPrint.h"

static void QPrint(const char * pattern,...)
{
#if DEBUG 
    printf(pattern,...);
#endif
}