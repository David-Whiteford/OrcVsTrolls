
#include "Character.h"
#include "orc.h"
#include "troll.h"
#include "Player.h"

using namespace std;

int Character::getSpellDmgNum()
{
	return m_spells;
}

int Character::getMeleeDmgNum()
{
	return m_melee;
}

int Character::getDefence()
{
	return m_shield;
}
std::string Character::setName()
{
	cout << "Enter the name of you charcater: " << endl;
	return 0;
}
//int Character::getHealth()
//{
//	return m_health;
//}

