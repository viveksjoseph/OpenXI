/*
 * GenericPlayerCharacter.cpp
 *
 *  Created on: 05-Sep-2015
 *      Author: gaudham
 */

#include "GenericPlayerCharacter.h"
#define PLAYER_DEFAULT_CAPACITY 20
namespace openxi
{

	GenericPlayerCharacter::GenericPlayerCharacter(bool gender, std::string name)
	{
		// TODO Auto-generated constructor stub
		isMale = gender;
		playerName = name;
		playerHitPoints = 5;
		playerAttackPoints = 1;
		playerDefencePoints = 0;
		playerLevel = 1;
		currentStage = 1.0;
		carryCapacity = PLAYER_DEFAULT_CAPACITY;
		currentEquipedObject = new InventoryItem(1, 0, false, "Simple Sword", 1);
	}

	GenericPlayerCharacter::~GenericPlayerCharacter()
	{
		// TODO Auto-generated destructor stub
	}

	void GenericPlayerCharacter::CharachterUpdate(CharacterStance playerControl)
	{
		switch(playerControl)
		{
		case isStanding:
			break;
		case isWalking:
			break;
		case isSprinting:
			break;
		case isAttacking:
			break;
		case isBlocking:
			break;
		case isHit:
			break;
		case isDead:
			break;
		}
	}

	void GenericPlayerCharacter::PlayerPickUp(InventoryItem* pickUpObject)
	{
		if(playerInventory.size() > carryCapacity)
		{
		}
		else
		{
			playerInventory.pushBack(pickUpObject);
		}
	}

	void GenericPlayerCharacter::CharacterLevelUp()
	{
		playerLevel++;
	}
	void GenericPlayerCharacter::EquipCharacter(int choosenObject)
	{
		for(Vector<InventoryItem*>::iterator playerObject = playerInventory.begin(); playerObject < playerInventory.end(); playerObject++)
		{
			InventoryItem* currentItem = *playerObject;
			if(currentItem->getObjectWorldID() == choosenObject)
			{
				playerAttackPoints = playerAttackPoints - currentEquipedObject->getAttackBoost();
				playerDefencePoints = playerDefencePoints - currentEquipedObject->getDefenceBoost();
				playerAttackPoints = playerAttackPoints - currentItem->getAttackBoost();
				playerDefencePoints = playerDefencePoints - currentItem->getDefenceBoost();
				break;
			}
		}
	}
} /* namespace openxi */
