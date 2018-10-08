#pragma once
#include "Classes.h"

class Orc : public Character {
public:

	void characterCreation() { cout << "Set the name of your orc" << endl; }
	void barrelRoll() { cout << "rooooooolllllllllllinggggggg" << endl; }
	void walk() { cout << "Doopers have a really cool walk!" << endl; }
	void fly() { cout << "Dooper is flapping and flying" << endl; }
	
};
