/*
 * CCParallaxNodeExtras.h
 *
 *  Created on: 05-Sep-2015
 *      Author: gaudham
 */

#ifndef EXTRAUTILS_INFINITEPARALLAXNODE_H_
#define EXTRAUTILS_INFINITEPARALLAXNODE_H_
#include "cocos2d.h"
USING_NS_CC;
namespace openxi
{

	class InfiniteParallaxNode:public ParallaxNode
	{
	public:
	    static InfiniteParallaxNode* create();
	    void updatePosition();
	};

} /* namespace openxi */

#endif /* EXTRAUTILS_INFINITEPARALLAXNODE_H_ */
