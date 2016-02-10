//
//  QSingleton.h
//  BrickAlpha
//
//  Created by 凉鞋 on 15/8/4.
//
//

#ifndef __BrickAlpha__QSingleton__
#define __BrickAlpha__QSingleton__

/*
 * 单例模式
 */
namespace QFramework {
    
    template <class _T>
    class QSingleton
    {
    public:
        static _T* getInstance()
        {
            static _T* pInstance = NULL;
            if (pInstance == NULL) {
                pInstance = new _T();
                return pInstance;
            }
            return pInstance;
        }
    };
}


#endif /* defined(__BrickAlpha__QSingleton__) */
