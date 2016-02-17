//
//  SoundMgr.cpp
//  Client
//
//  Created by 凉鞋 on 16/2/10.
//
//

#include "QSoundMgr.h"

using namespace QFramework;


QSoundMgr::QSoundMgr()
{
    InitMgr(); // 懒加载
}

QSoundMgr::~QSoundMgr()
{
    
}

// 初始化数据
void QSoundMgr::InitMgr()
{
    m_pCachedAudioEngine = SimpleAudioEngine::getInstance();
}

// 播放音乐
void QSoundMgr::PlayMusic(const char *filePath, bool loop)
{
    SimpleAudioEngine::getInstance()->playBackgroundMusic(filePath,loop);
}

// 播放音乐
void QSoundMgr::PlaySound(const char *filePath)
{
    m_pCachedAudioEngine->playEffect(filePath);
}

void QSoundMgr::PauseAllSounds()
{
    m_pCachedAudioEngine->pauseAllEffects();
}

void QSoundMgr::PauseMusic()
{
    m_pCachedAudioEngine->pauseBackgroundMusic();
}

void QSoundMgr::ResumeAllSounds()
{
    m_pCachedAudioEngine->resumeAllEffects();
}

void QSoundMgr::ResumeMusic()
{
    m_pCachedAudioEngine->resumeBackgroundMusic();
}


void QSoundMgr::setMusicVolume(float volume)
{
    m_pCachedAudioEngine->setBackgroundMusicVolume(volume);
}

void QSoundMgr::setSoundVolume(float volume)
{
    m_pCachedAudioEngine->setEffectsVolume(volume);
}

void QSoundMgr::musicOff()
{
    m_pCachedAudioEngine->setBackgroundMusicVolume(0.0f);
}

void QSoundMgr::musicOn()
{
    m_pCachedAudioEngine->setBackgroundMusicVolume(1.0f);
}

void QSoundMgr::soundOff()
{
    m_pCachedAudioEngine->setEffectsVolume(0.0f);
}

void QSoundMgr::soundOn()
{
    m_pCachedAudioEngine->setEffectsVolume(1.0f);
}

bool QSoundMgr::isMusicOn()
{
    return m_bMusicOn;
}

bool QSoundMgr::isSoundOn()
{
    return m_bSoundOn;
}