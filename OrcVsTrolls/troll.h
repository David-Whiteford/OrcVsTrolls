#pragma once
#include "Character.h"


class Troll : public Character 
{
public:
	void fly() { cout << "Average Dooper is flapping and flying" << endl; }
	
	
	void setHealth(int t_health);
	int getHealth();

private:
	int m_health{ 10 };
};
