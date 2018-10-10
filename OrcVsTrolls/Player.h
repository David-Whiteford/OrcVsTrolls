#pragma once
#pragma once
#include "Character.h"

class Player : public Character 
{
public:

	void characterCreation() { cout << "Set the name of your character" << endl; }
	void setHealth(int t_health);
	int getHealth();
private:

	int m_health{ 10 };
};




