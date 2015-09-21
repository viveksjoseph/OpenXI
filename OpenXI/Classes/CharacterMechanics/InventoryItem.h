/*
 * InventoryItem.h
 *
 *  Created on: 07-Sep-2015
 *      Author: gaudham
 */

#ifndef CHARACTERMECHANICS_INVENTORYITEM_H_
#define CHARACTERMECHANICS_INVENTORYITEM_H_

#include <cocos2d.h>
#define BASE_OBJECT_VALUE 100
USING_NS_CC;

namespace openxi
{

class InventoryItem: public cocos2d::Sprite
{
	CC_SYNTHESIZE(float, attackBoost, AttackBoost);
	CC_SYNTHESIZE(float, defenceBoost, DefenceBoost);
	CC_SYNTHESIZE(int, objectWorldID, ObjectWorldID);
	bool isSpecial;
	std::string objectName;
	float conditionOfObject;
public:
	InventoryItem(float attackBoost, float defenceBoost, bool isSpecial, std::string objectName, int objectID);
	virtual ~InventoryItem();
	virtual void UpdateObjectCondition();
	virtual void ImproveItemWithSkillLevel(int skill);
	float SellItemValue();
	float BuyItemValue();
};

} /* namespace openxi */

#endif /* CHARACTERMECHANICS_INVENTORYITEM_H_ */
