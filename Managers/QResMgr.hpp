//
//  QResMgr.hpp
//  Client
//
//  Created by 凉鞋 on 16/2/10.
//
//

#ifndef QResMgr_hpp
#define QResMgr_hpp

#include <cocos2d.h>
#include "../Interface/IMgr.h"
#include "../DesignPattern/QSingleton.h"

using namespace cocos2d;
namespace QFramework {
    class QResMgr : public QSingleton<QResMgr> ,virtual public IMgr
    {
    private:
        FileUtils *m_CachedFileUtils;
    public:
        QResMgr();
        virtual ~QResMgr();
        
        
        void AddSearchPath(const char *);
        
    protected:
        virtual void InitMgr();
    };
}
#endif /* QResMgr_hpp */
