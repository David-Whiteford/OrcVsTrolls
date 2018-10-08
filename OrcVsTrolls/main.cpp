#include <iostream>
#include "Classes.h"
#include "orc.h"
#include "troll.h"
using namespace std;
int main(void)
{
	bool characterSelection{ true };
	int characterSelect{ 0 };
	cout << "Please select to play as an orc or whether to play as a troll. To select an orc press 1 and to select a troll press 2" << endl;
	cin >> characterSelect;

	Troll troll;
	Orc orc;
	cout << "Let go virtual" << endl;
	//Character character;
	//character.flip();
	//character.walk();
	
	if (characterSelect == 1)
	{
		cout << "Let go create an Orc" << endl;
		orc.setName();
		characterSelection = false;
	/*	orc.walk();
		orc.fly();
		orc.flip();*/
	}

	if (characterSelect == 2)
	{
		cout << "Let go create an Troll" << endl;
		
		troll.walk();
		troll.fly();
		troll.flip();
		
	}

	

	/*Character* npc = &orc;
	npc->flip();
	npc->fly();
	npc->walk();

	npc = &troll;
	npc->flip();
	npc->fly();
	npc->walk();*/

	cin.get();

	system("pause");
}

