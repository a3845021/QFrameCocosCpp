//
//  QDataMgr.cpp
//  Client
//
//  Created by 凉鞋 on 16/2/14.
//
//

#include "QDataMgr.hpp"


using namespace QFramework;

QDataMgr::QDataMgr()
{
    InitMgr();
}

void QDataMgr::InitMgr()
{
    m_pCachedUserDefault = UserDefault::getInstance();
}

QDataMgr::~QDataMgr()
{
    m_pCachedUserDefault = nullptr;
}


/*
 * 封装下FileUtil的Api,没什么用
 */
float QDataMgr::getFloatData(const char *key)
{
    return m_pCachedUserDefault->getFloatForKey(key);
}

int QDataMgr::getIntData(const char *key)
{
    return m_pCachedUserDefault->getIntegerForKey(key);
}

bool QDataMgr::getBoolData(const char *key)
{
    return m_pCachedUserDefault->getBoolForKey(key);
}

void QDataMgr::setBoolData(const char *key, bool value)
{
    m_pCachedUserDefault->setBoolForKey(key, value);
}

void QDataMgr::setIntData(const char *key, int value)
{
    m_pCachedUserDefault->setIntegerForKey(key, value);
}

void QDataMgr::setFloatData(const char *key, float value)
{
    m_pCachedUserDefault->setFloatForKey(key, value);
}

void QDataMgr::apply()
{
    m_pCachedUserDefault->flush();
}

