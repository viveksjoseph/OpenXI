/*
 * MainScreen.h
 *
 *  Created on: 05-Sep-2015
 *      Author: gaudham
 */

#ifndef GAMESCREENS_MAINSCREEN_H_
#define GAMESCREENS_MAINSCREEN_H_

#include <cocos2d.h>
#include "../ExtraUtils/InfiniteParallaxNode.h"
USING_NS_CC;
namespace openxi
{

class MainScreen: public cocos2d::Layer
{
//	Sprite* menuBgImage;
	InfiniteParallaxNode* menuBgImage;
public:
	MainScreen();
	virtual ~MainScreen();
	// there's no 'id' in cpp, so we recommend returning the class instance pointer
	static cocos2d::Scene* createScene();

	// Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
	virtual bool init();

	// a selector callback
	void menuCloseCallback(cocos2d::Ref* pSender);

	// implement the "static create()" method manually
	CREATE_FUNC(MainScreen);

	void update(float dt);
};

} /* namespace openxi */

#endif /* GAMESCREENS_MAINSCREEN_H_ */
