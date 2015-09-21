/*
 * GenericAICharacter.h
 *
 *  Created on: 05-Sep-2015
 *      Author: gaudham
 */

#ifndef CHARACTERMECHANICS_GENERICAICHARACTER_H_
#define CHARACTERMECHANICS_GENERICAICHARACTER_H_

#include <cocos2d.h>
#include "InventoryItem.h"
USING_NS_CC;

namespace openxi
{
typedef enum
	{
		isStanding = 0,
		isWalking,
		isRunning,
		isAttacking,
		isBlocking,
		isHit,
		isDead
	}NPCstate;

	class GenericAICharacter: public cocos2d::Sprite
	{
		bool isAlive;
		bool isMinorBoss;
		bool hasRangeAttack;
		int npcHitPoints;
		int npcAttackPoints;
		int npcDefencePoints;
		int npcLevel;
		float intelegenceLevel;
		NPCstate npcState;
		PhysicsBody* objectBoundry;
	public:
		GenericAICharacter();
		virtual ~GenericAICharacter();
//		virtual void SetIntilligenceLevel(float level);
//		virtual void UpdateAIState();
	};

} /* namespace openxi */

#endif /* CHARACTERMECHANICS_GENERICAICHARACTER_H_ */
