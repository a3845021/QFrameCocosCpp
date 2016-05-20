//
//  QImageMgr.cpp
//  Client
//
//  Created by 凉鞋 on 16/3/7.
//
//

#include "QImageMgr.h"

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

