//
//  MainLayer.h
//  lzycpp
//
//  Created by elestorm on 2024/7/26.
//

#ifndef __MAIN_LAYER_H__
#define __MAIN_LAYER_H__

#include <stdio.h>
#include "cocos2d.h"

// 实现这个Layer类
class MainLayer : public cocos2d::Layer
{

public:
    // 初始化
    virtual bool init() override;

    // 

    
    // 创建一个Layer
    CREATE_FUNC(MainLayer);
};


#endif /* MainLayer_hpp */
