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

static void QPrint(const char *actionName, const char * content)
{
#ifdef DEBUG
    printf("%s @@@@@ %s\n",actionName,content);
#endif
}
#endif /* QPrint_hpp */
