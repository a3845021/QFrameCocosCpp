//
//  IMgr.h
//  Client
//
//  Created by 凉鞋 on 16/2/10.
//
//

#ifndef IMgr_h
#define IMgr_h

namespace QFramework {
    
    class IMgr
    {
        
    public:
        IMgr() {}
        virtual ~IMgr() {};
        virtual void InitMgr() {};
    };
}

#endif /* IMgr_h */
