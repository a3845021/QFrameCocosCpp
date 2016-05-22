//
//  QImageMgr.hpp
//  Client
//
//  Created by 凉鞋 on 16/3/7.
//
//

#ifndef QImageMgr_hpp
#define QImageMgr_hpp

#include <stdio.h>
#include <cocos2d.h>
#include "../Interface/IMgr.h"
#include "../DesignPattern/QSingleton.h"

USING_NS_CC;

namespace QFramework {
    class QImageMgr : public QSingleton<QImageMgr>,virtual public IMgr
    {

    private:
        CCTextureCache *m_pCachedTextureMgr;
    public:
        QImageMgr();
        virtual ~QImageMgr();
        virtual void InitMgr();
        
        
        void Description();
    };
}
#endif /* QImageMgr_hpp */
