/*
 * MainScreen.cpp
 *
 *  Created on: 05-Sep-2015
 *      Author: gaudham
 */

#include "MainScreen.h"

namespace openxi
{

	MainScreen::MainScreen()
	{
		// TODO Auto-generated constructor stub

	}

	MainScreen::~MainScreen()
	{
		// TODO Auto-generated destructor stub
	}

	Scene* MainScreen::createScene()
	{
	    // 'scene' is an autorelease object
	    auto scene = Scene::create();

	    // 'layer' is an autorelease object
	    auto layer = MainScreen::create();

	    // add layer as a child to scene
	    scene->addChild(layer);

	    // return the scene
	    return scene;
	}
	bool MainScreen::init()
	{
	    if ( !Layer::init() )
	    {
	        return false;
	    }

	    Size visibleSize = Director::getInstance()->getVisibleSize();
	    Vec2 origin = Director::getInstance()->getVisibleOrigin();

	    menuBgImage = InfiniteParallaxNode::create();
	    int layerCounter = 0;
	    for(int i = 0; i <= 10; i++)
	    {
	    	auto imageName = String::createWithFormat("layer_%02d.png", layerCounter);
	    	CCLOG("The image name is %s", imageName->getCString());
	    	auto parallaxLayer = Sprite::create(imageName->getCString());
	    	//TODO: Fine tune layer speed in the following 'Point()' section.
	    	menuBgImage->addChild(parallaxLayer,
	    		                  layerCounter,
					              Point(layerCounter, 1),
					              (Vec2(visibleSize.width / 2 + ((i % 2) * (parallaxLayer->getContentSize().width)) + origin.x, visibleSize.height/2 + origin.y)));
	    	if(i % 2 == 0 && i != 0) layerCounter++;
	    }

	    this->addChild(menuBgImage, 0);

	    this->scheduleUpdate();
	    return true;
	}

	void MainScreen::update(float dt)
	{
		Point scrollDecrement = Point(5, 0);
		menuBgImage->setPosition(menuBgImage->getPosition() - scrollDecrement);
		menuBgImage->updatePosition();
	}
	void MainScreen::menuCloseCallback(Ref* pSender)
	{
	    Director::getInstance()->end();

	#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	    exit(0);
	#endif
	}
} /* namespace openxi */
