#pragma once
#include "Character.h"
//orc class part of player class
class Orc : public Character 
{
public:

	void characterCreation() { cout << "Set the name of your orc" << endl; }
	//set function foor the orc
	void setHealth(int t_health);
	//get function foor the orc
	int getHealth();
private:
	//variables
	int m_health{ 20 };
};
