////
////  SoundMgr.hpp
////  Client
////
////  Created by 凉鞋 on 16/2/10.
////
////
//
#ifndef SoundMgr_h
#define SoundMgr_h

#include <stdio.h>
#include <cocos2d.h>

#include "../DesignPattern/QSingleton.h"
#include "SimpleAudioEngine.h"
#include "../Interface/IMgr.h"

USING_NS_CC;
using namespace CocosDenshion;


namespace QFramework {

    class QSoundMgr : public QSingleton<QSoundMgr> ,virtual public IMgr
    {
    private:
        SimpleAudioEngine *m_pCachedAudioEngine;
        
        bool m_bMusicOn;
        bool m_bSoundOn;
        
    public:
        QSoundMgr();
        virtual ~QSoundMgr();
    public:
        void PlayMusic(const char *path,bool loop);
        void PlaySound(const char *path);
        void PauseAllSounds();
        void PauseMusic();
        void ResumeAllSounds();
        void ResumeMusic();
        
        void setMusicVolume(float volume);
        void setSoundVolume(float volume);
        
        void musicOn();
        void musicOff();
        void soundOn();
        void soundOff();
        
        void PreloadSound(const char *path);
        void PreloadMusic(const char *path);
        
        bool isMusicOn();
        bool isSoundOn();
    // implement from IMgr
    public:
        virtual void InitMgr();
    };
}

#endif /* SoundMgr_hpp */
