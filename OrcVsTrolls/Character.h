#pragma once

#include <iostream>

using namespace std;

class Character

{
public:
	void flip() { cout << "I know how to flip and I will flipping do it" << endl; }
	virtual void walk() { cout << "just in case they are too young to walk yet" << endl; }
	virtual void fly() = 0; //pure virtual function

	int getSpellDmgNum();
	int getMeleeDmgNum();
	int getDefence();
	/*int getHealth();*/
	std::string setName();


private:

	int m_spells{ 5 };
	int m_melee{ 7 };
	int m_shield{ 3 };
	/*int m_health{ 10 };*/


};



