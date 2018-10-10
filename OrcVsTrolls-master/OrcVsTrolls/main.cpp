#include <iostream>
#include "Character.h"
#include "orc.h"
#include "troll.h"
#include "time.h"

using namespace std;

void Combat(Orc *t_orc, Troll *t_troll);


//variables for the conbat funstion
int fightStance{ 0 };
int playerAttack{ 0 };
int enemyDefence{ 0 };
int enemyAttack{ 0 };
int playerDefence{ 0 };
int damageDealth{ 0 };
int enemyHealth{ 0 };
int defence{ 0 };
int playerHealth{ 0 };

bool playerAlive{ true };
bool enemyAlive{ true };
int loot1{ 100 };
int loot2{ 200 };


int main(void)
{
	srand(time(NULL));
	bool characterSelection{ true };
	int characterSelect{ 0 };

	//output starting message
	cout << "Please select to play as an orc or whether to play as a troll. To select an orc press 1 and to select a troll press 2" << endl;
	cin >> characterSelect;
	
	//orc andf troll objects with pointers
	Orc orc;
	Troll troll;
	Troll *trollPointer = &troll;
	Orc *orcPointer = &orc;
	
	//if for the character select
	if (characterSelect == 1)
	{
		cout << "You are playing as a orc" << endl;
		//bool for the character select
		characterSelection = false;
	
	}

	if (characterSelect == 2)
	{
		//outputs message of the character you selected
		cout << "You are playing as a Troll" << endl;
		//bool for the character select
		characterSelection = false;


	}
	//fight message
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << " The enemy approaches prepare for the battle. The enemy have breached the gate so prepare for a fight" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << "one of the enemies approaches. he is a brute of a creature you can tell he has a strong defence" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	//function call for combat within loop checking whether player and enemy are alive
	while ((enemyAlive == true )&&( playerAlive == true))
	{
		Combat(orcPointer, trollPointer);
	}


	//outputs messasage if the enemy is killed
	if (enemyAlive == false)
	{
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		cout << " you have killed the enemy" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		cout << "Congrates you win" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	}
	//outputs messasage if the player is killed
	if (playerAlive == false)
	{
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		cout << " you have been killed by the enemy" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		cout << "Sorry you loose" << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		
	}
	cin.get();
	system("pause");
}
//combat 
void Combat(Orc *t_orc, Troll *t_troll)
{
	//generates random number for whether critical damage was dealth
	int missOrCrit{ rand() % 3 + 1 };
	//outputs combat messages
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cout << "you can attack or defend Press 1 to attack and 2 to defend" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------" << endl;
	cin >> fightStance;
	//determines whether you dfend or attack
	if (fightStance == 1)
	{
		//gets melee aand defence for troll and orc
		playerAttack = t_orc->getMeleeDmgNum();
		enemyDefence = t_troll->getDefence();
		//detrermines if you have a crit or normal attack
		if (missOrCrit == 1)
		{
			//determines the damage to the enemy
			damageDealth = playerAttack - enemyDefence;
			//message outputs damage
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;
			cout << "You attack the enemy and dealth  " << damageDealth << " damage " << endl;
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		}
		//detrermines if you have a crit or normal attack
		if (missOrCrit == 2)
		{
			//determines the damage to the enemy
			damageDealth = playerAttack - enemyDefence + 2;
			//message outputs damage
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;
			cout << "You attack the enemy and dealth  " << damageDealth << " for critical damage " << endl;
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;

		}
		if (missOrCrit == 3)
		{
			//get function for the spell damage
			playerAttack = t_orc->getSpellDmgNum();
			//determines the damage to the enemy
			damageDealth = playerAttack - enemyDefence + 2;
			//message outputs damage
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;
			cout << "You attack the enemy and dealth  " << damageDealth << " for critical damage " << endl;
			cout << "-----------------------------------------------------------------------------------------------------------" << endl;

		}
		//gets enemy health and calculates new health along with appling it
		enemyHealth = t_troll->getHealth();
		enemyHealth = enemyHealth - damageDealth;
		t_troll->setHealth(enemyHealth);
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		cout << "The amount of health left is: " << enemyHealth << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		//determines if the health is 0 if so sets alive to false
		if (enemyHealth <= 0)
		{
			enemyAlive = false  ;
		}

	}
	else if (fightStance == 2)
	{ 

		defence = t_orc->getDefence();
		enemyAttack = t_troll->getMeleeDmgNum();
		damageDealth = enemyAttack - defence;


		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		cout << "You were defending and the enemy attack you were dealth " << damageDealth << " damage " << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;

		playerHealth = t_orc->getHealth();
		playerHealth = playerHealth - damageDealth;
		t_orc->setHealth(playerHealth);
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;
		cout << "You now have  " << playerHealth << " health left " << endl;
		cout << "-----------------------------------------------------------------------------------------------------------" << endl;

		if (playerHealth <= 0)
		{
			playerAlive = false;
		}
	}

	


}
