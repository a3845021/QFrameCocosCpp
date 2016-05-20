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
    m_pCachedAudioEngine = SimpleAudioEngine::sharedEngine();
}

// 播放音乐
void QSoundMgr::PlayMusic(const char *filePath, bool loop)
{
    SimpleAudioEngine::sharedEngine()->playBackgroundMusic(filePath,loop);
}

// 播放音乐
void QSoundMgr::PlaySound(const char *filePath)
{
    m_pCachedAudioEngine->playEffect(filePath);
}

// 暂停所有声音
void QSoundMgr::PauseAllSounds()
{
    m_pCachedAudioEngine->pauseAllEffects();
}

// 暂停音乐
void QSoundMgr::PauseMusic()
{
    m_pCachedAudioEngine->pauseBackgroundMusic();
}

// 恢复所有声音
void QSoundMgr::ResumeAllSounds()
{
    m_pCachedAudioEngine->resumeAllEffects();
}

// 恢复音乐
void QSoundMgr::ResumeMusic()
{
    m_pCachedAudioEngine->resumeBackgroundMusic();
}


// 设置音量
void QSoundMgr::setMusicVolume(float volume)
{
    m_pCachedAudioEngine->setBackgroundMusicVolume(volume);
}

// 设置声音音量
void QSoundMgr::setSoundVolume(float volume)
{
    m_pCachedAudioEngine->setEffectsVolume(volume);
}

void QSoundMgr::PreloadSound(const char *path)
{
    m_pCachedAudioEngine->preloadEffect(path);
}

void QSoundMgr::PreloadMusic(const char * path)
{
    m_pCachedAudioEngine->preloadBackgroundMusic(path);
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