#pragma once
#include "Entity.h"

class BaseCombatant : public Entity
{
public:
	void Attack(Entity& target)
	{
		int newHealthOfTarget = target.getHP() - GetDamage();
		target.setHP(newHealthOfTarget);
	}
	int GetDamage()
	{
		return getAtk()* ((rand() % 10) / 10);
	}
};