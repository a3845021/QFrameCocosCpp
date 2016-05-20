//
//  QResMgr.cpp
//  Client
//
//  Created by 凉鞋 on 16/2/10.
//
//

#include "QResMgr.hpp"


using namespace QFramework;


QResMgr::QResMgr()
{
    InitMgr();
}

QResMgr::~QResMgr()
{
    m_CachedFileUtils = nullptr;
}

void QResMgr::InitMgr()
{
    m_CachedFileUtils = CCFileUtils::sharedFileUtils();
}


void QResMgr::AddSearchPath(const char *searchPath)
{
    m_CachedFileUtils->addSearchPath(searchPath);
}



