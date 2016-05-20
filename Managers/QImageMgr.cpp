//
//  QImageMgr.cpp
//  Client
//
//  Created by 凉鞋 on 16/3/7.
//
//

#include "QImageMgr.h"
#include "../Util/QPrint.h"

using namespace QFramework;

QImageMgr::QImageMgr()
{
    InitMgr();
}

QImageMgr::~QImageMgr()
{
    m_pCachedTextureMgr = nullptr;
}

void QImageMgr::InitMgr()
{
    m_pCachedTextureMgr = CCTextureCache::sharedTextureCache();
}


void QImageMgr::Description()
{
    QPrint("LogoScene::cleanup", CCTextureCache::sharedTextureCache()->description());
    
    CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

