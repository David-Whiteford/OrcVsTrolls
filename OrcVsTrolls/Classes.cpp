#include "Classes.h"
#include "orc.h"
#include "troll.h"

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
	return characterName;
}
