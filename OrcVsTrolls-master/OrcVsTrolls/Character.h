#pragma once

#include <iostream>

using namespace std;

class Character

{
public:
	
	//get functioons for attackss
	int getSpellDmgNum();
	int getMeleeDmgNum();
	int getDefence();
private:
	//private variables
	int m_spells{ 5 };
	int m_melee{ 7 };
	int m_shield{ 3 };
	
};



