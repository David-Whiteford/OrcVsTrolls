
#include "Character.h"
#include "orc.h"
#include "troll.h"


using namespace std;
//function for getting spells damage
int Character::getSpellDmgNum()
{
	return m_spells;
}
//function for getting melee damage
int Character::getMeleeDmgNum()
{
	return m_melee;
}
//function for getting defence 
int Character::getDefence()
{
	return m_shield;
}




