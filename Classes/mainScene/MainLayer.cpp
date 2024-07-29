//
//  MainLayer.cpp
//  lzycpp
//
//  Created by elestorm on 2024/7/26.
//

#include "MainLayer.h"

USING_NS_CC;

bool MainLayer::init()
{
    if (!Layer::init()) {
        return false;
    }

    std::string filename = "bg.jpg";
    bool fileExists = FileUtils::getInstance()->isFileExist(filename);
    if (fileExists) {
        CCLOG("File %s exists.", filename.c_str());
    } else {
        CCLOG("File %s does not exist.", filename.c_str());
    }

    auto sprite = Sprite::create("bg.jpg");
    sprite->setPosition(Vec2(200, 200));
    this->addChild(sprite);

    return true;
}
