//
//  QPrint.hpp
//  Client
//
//  Created by 凉鞋 on 16/2/10.
//
//

#ifndef QPrint_hpp
#define QPrint_hpp

#include <stdio.h>

static void QPrint(const char * pattern,...)
{
#ifndef DEBUG
    va_list ap;
    va_start(ap, pattern);
    
    printf("********");
    printf(pattern,ap);
    printf("********\n");
#endif
}
#endif /* QPrint_hpp */
