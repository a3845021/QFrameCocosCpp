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

#define DEBUG 1

static void QPrint(const char * printContent)
{
#ifdef DEBUG
    printf("********");
    printf("%s",printContent);
    printf("********\n");
#endif
}
#endif /* QPrint_hpp */
