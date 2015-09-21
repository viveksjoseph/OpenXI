/*
 * GenericPlayerCharacter.h
 *
 *  Created on: 05-Sep-2015
 *      Author: gaudham
 */

#ifndef CHARACTERMECHANICS_GENERICPLAYERCHARACTER_H_
#define CHARACTERMECHANICS_GENERICPLAYERCHARACTER_H_

#include <cocos2d.h>
#include "InventoryItem.h"
USING_NS_CC;
namespace openxi
{
	typedef enum
	{
		isStanding = 0,
		isWalking,
		isSprinting,
		isAttacking,
		isBlocking,
		isHit,
		isDead
	}CharacterStance;
    
	class GenericPlayerCharacter: public cocos2d::Sprite
	{
		bool isMale;
		bool isAlive;
		bool isSuperCharged;
		int playerHitPoints;
		int playerAttackPoints;
		int playerDefencePoints;
		int playerLevel;
		int carryCapacity;
		InventoryItem* currentEquipedObject;
		float currentStage;
		std::string playerName;
		Vector<InventoryItem*> playerInventory;
		CharacterStance playerState;
		PhysicsBody* objectBoundry;
	public:
		GenericPlayerCharacter(bool gender, std::string playerName);
		virtual ~GenericPlayerCharacter();
		virtual void CharachterUpdate(CharacterStance playerControl);
		virtual void EquipCharacter(int choosenObject);
		virtual void CharacterLevelUp();
		virtual void PlayerPickUp(InventoryItem* pickUpObject);
	};

} /* namespace openxi */

#endif /* CHARACTERMECHANICS_GENERICPLAYERCHARACTER_H_ */
