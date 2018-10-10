#include <iostream>
#include "Character.h"
#include "orc.h"
#include "troll.h"
#include "time.h"
#include "Player.h"
using namespace std;
int main(void)
{
	bool characterSelection{ true };
	int characterSelect{ 0 };
	int fightStance{ 0 };
	int playerAttack{ 0 };
	int enemyDefence{ 0 };
	int enemyAttack{ 0 };
	int playerDefence{ 0 };
	int damageDealth{ 0 };
	int enemyHealth{ 0 };
	int defence{ 0 };
	int playerHealth{ 0 };
	srand(time(NULL));
	int missOrCrit{ rand() % 2 + 1 };
	std::string name("");

	cout << "Please select to play as an orc or whether to play as a troll. To select an orc press 1 and to select a troll press 2" << endl;
	cin >> characterSelect;

	Troll troll;
	Orc orc;

	
	/*cout << "Let go virtual" << endl;*/
	//Character character;
	//character.flip();
	//character.walk();

	if (characterSelect == 1)
	{
		cout << "Let go create an Orc" << endl;
		cout << "Enter your name" << endl;

	

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


	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << " The enemy approaches prepare for the battle. The enemy have breached the gate so prepare for a fight" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << "one of the enemies approaches. he is a brute of a creature you can tell he has a strong defence" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << "you can attack or defend Press 1 to attack and 2 to defend" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cin >> fightStance;
	
		if (fightStance == 1)
		{
			playerAttack = orc.getMeleeDmgNum();
			enemyDefence = troll.getDefence();
			if (missOrCrit == 1)
			{
				damageDealth = playerAttack - enemyDefence;
				cout << "-----------------------------------------------------------------------------------------------------------" << endl;
				cout << "You attack the enemy and dealth  " << damageDealth << " damage " << endl;
				cout << "-----------------------------------------------------------------------------------------------------------" << endl;
			}
			if (missOrCrit == 2)
			{
				damageDealth = playerAttack - enemyDefence + 2;
				cout << "-----------------------------------------------------------------------------------------------------------" << endl;
				cout << "You attack the enemy and dealth  " << damageDealth << " for critical damage " << endl;
				cout << "-----------------------------------------------------------------------------------------------------------" << endl;

			}
			/*enemyHealth = troll.getHealth();*/
			enemyHealth = enemyHealth - damageDealth;
			
		}
		else if (fightStance == 2)
		{
			defence = orc.getDefence();
			enemyAttack = troll.getMeleeDmgNum();
			damageDealth = enemyAttack - defence;
		
			
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;
			cout << "You were defending and the enemy attack you were dealth " << damageDealth << " damage " << endl;
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;

			playerHealth = orc.getHealth();
			playerHealth = playerHealth - damageDealth;
			orc.setHealth(playerHealth);
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;
			cout << "You now have  " << playerHealth << " health left " << endl;
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;
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


