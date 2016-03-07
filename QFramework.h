//
//  QFramework.hpp
//  Client
//
//  Created by 凉鞋 on 16/2/10.
//
//

#ifndef QFramework_hpp
#define QFramework_hpp

#include <stdio.h>

// 配置
#include "Global/QConfig.h"

// 日志
#include "Util/QPrint.h"

// DesignPatterns  设计模式
#include "DesignPattern/QSingleton.h"

// Interface 接口
#include "Interface/IView.h"
#include "Interface/IModel.h"
#include "Interface/ICommand.h"
#include "Interface/IMessage.h"
#include "Interface/ICtrl.h"
#include "Interface/IMgr.h"

// Managers 管理器
#include "Managers/QSoundMgr.h"
#include "Managers/QResMgr.hpp"
#include "Managers/QDataMgr.hpp"
#include "Managers/QImageMgr.h"


#endif /* QFramework_hpp */
