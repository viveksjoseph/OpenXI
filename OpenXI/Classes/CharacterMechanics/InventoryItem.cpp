/*
 * InventoryItem.cpp
 *
 *  Created on: 07-Sep-2015
 *      Author: gaudham
 */

#include "InventoryItem.h"

namespace openxi
{

	InventoryItem::InventoryItem(float attackBoostValue, float defenceBoostValue, bool isEnhanched, std::string name, int Id)
	{
		// TODO Auto-generated constructor stub
		attackBoost = attackBoostValue;
		defenceBoost = defenceBoostValue;
		isSpecial = isEnhanched;
		objectName = name;
		objectWorldID = Id;
		conditionOfObject = 1.0;
	}

	InventoryItem::~InventoryItem()
	{
		// TODO Auto-generated destructor stub
	}

	void InventoryItem::ImproveItemWithSkillLevel(int skill)
	{
		attackBoost = attackBoost + rand() % skill;
		defenceBoost = defenceBoost + rand() % skill;
	}

	float InventoryItem::SellItemValue()
	{
		return 2;
	}

	float InventoryItem::BuyItemValue()
	{
		return 5;
	}
	void InventoryItem::UpdateObjectCondition()
	{
		CCLOG("Placeholder");
	}
} /* namespace openxi */
