#pragma once

#include <iostream>

using namespace std;

class Character {
public:
	void flip() { cout << "I know how to flip and I will flipping do it" << endl; }
	virtual void walk() { cout << "just in case they are too young to walk yet" << endl; }
	virtual void fly() = 0; //pure virtual function

	int getSpellDmgNum();
	int getMeleeDmgNum();
	int getDefence();

private:
	int m_spells{ 5 };
	int m_melee{ 7 };
	int m_shield{ 3 };
	
	

};

class Orc : public Character {
public:
	
	void characterCreation() {cout << "Set the name of your orc" << endl;	}
	void setCharacterName();
	void barrelRoll() { cout << "rooooooolllllllllllinggggggg" << endl; }
	void walk() { cout << "Doopers have a really cool walk!" << endl; }
	void fly() { cout << "Dooper is flapping and flying" << endl; }
};

class Troll : public Character {
public:
	void fly() { cout << "Average Dooper is flapping and flying" << endl; }
};

