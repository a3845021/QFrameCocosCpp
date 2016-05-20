//
//  QDataMgr.hpp
//  Client
//
//  Created by 凉鞋 on 16/2/14.
//
//

#ifndef QDataMgr_hpp
#define QDataMgr_hpp

#include <stdio.h>
#include <cocos2d.h>
#include "../Interface/IMgr.h"
#include "../DesignPattern/QSingleton.h"

USING_NS_CC;

namespace QFramework {
    class QDataMgr: public QSingleton<QDataMgr>,virtual public IMgr
    {
    private:
        CCUserDefault *m_pCachedUserDefault = nullptr;
    public:
        QDataMgr();
        virtual ~QDataMgr();
        virtual void InitMgr();
        
        
        int getIntData(const char *key);
        float getFloatData(const char *key);
        bool getBoolData(const char *key);
        
        void setIntData(const char *key,int value);
        void setFloatData(const char *key,float value);
        void setBoolData(const char *key,bool value);
        
        void apply();
    };
}
#endif /* QDataMgr_hpp */
