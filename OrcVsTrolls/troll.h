#pragma once
#include "Character.h"

//troll class part of player class
class Troll : public Character 
{
public:
	void fly() { cout << "Average Dooper is flapping and flying" << endl; }
	
	//set function foor the troll
	void setHealth(int t_health);
	//get function foor the troll
	int getHealth();

private:
	//variables
	int m_health{ 20 };
};
