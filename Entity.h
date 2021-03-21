#pragma once
#include <string>

/// <summary>
///  base class for objects like: player, NPC, enemy
///  purty simple
/// </summary>

class Entity 
{
public:
	const std::string& GetName()
	{
		return name;
	}
	int getHP()
	{
		return hp;
	}
	int getArmor()
	{
		return armor;
	}
	int getAtk()
	{
		return atk;
	}
	const char& getSign()
	{
		return sign;
	}
	void setName(const std::string& newName)
	{
		name = newName;
	}
	void setHP(int newHP)
	{
		hp = newHP;
	}
	void setArmor(int newArmor)
	{
		armor = newArmor;
	}
	void setAtk(int newAtk)
	{
		atk = newAtk;
	}
	void setSign(const char& newSign)
	{
		sign = newSign;
	}
private:
	std::string name;
	int hp;
	int armor;
	int atk;
	char sign; 
};