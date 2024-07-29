//
//  MainScene.cpp
//  lzycpp
//
//  Created by elestorm on 2024/7/23.
//

#include "MainScene.h"
#include "MainLayer.h"

USING_NS_CC;

Scene* MainScene::createScene()
{
    return MainScene::create();
}

// on "init" you need to initialize your instance
bool MainScene::init()
{
    if (!Scene::init())
    {
        return false;
    }
    
    auto layer = MainLayer::create();
    this->addChild(layer);

    return true;
}
