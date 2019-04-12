//"The Phantom Runes" ver.1 (c) 2019 by Axelrond

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <string>
#include <thread>
#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#include <windows.h>
#include "Sojourner.h"
#include "MobClass.h"
#include "locations.h"
#include "monsters.h"
#pragma comment(lib, "winmm.lib")
#pragma warning disable 4129

using namespace std;
using std::chrono::milliseconds;
player battle(player account);
player calcEXP(player account, classMob monster);
player levelUp(player account);
void death();


//scroll text fast
	void delayed_out(const std::string& message,
		milliseconds letter_delay = milliseconds(5),
		milliseconds disappearance_delay = milliseconds(2000))
	{
		const std::size_t msgLen = message.length();
		const std::string erasure_string = std::string(msgLen, '\b') +
			std::string(msgLen, ' ') + std::string(msgLen, '\b');

		std::size_t msgIdx = 0;

		while (msgIdx != msgLen)
		{
			std::cout << message[msgIdx++];
			std::this_thread::sleep_for(letter_delay);
		}

		std::this_thread::sleep_for(disappearance_delay);
		std::cout << erasure_string;
	}

	//scroll text slow
	void delayed_out_2(const std::string& message,
		milliseconds letter_delay = milliseconds(75),
		milliseconds disappearance_delay = milliseconds(2000))
	{
		const std::size_t msgLen = message.length();
		const std::string erasure_string = std::string(msgLen, '\b') +
			std::string(msgLen, ' ') + std::string(msgLen, '\b');

		std::size_t msgIdx = 0;

		while (msgIdx != msgLen)
		{
			std::cout << message[msgIdx++];
			std::this_thread::sleep_for(letter_delay);
		}

		std::this_thread::sleep_for(disappearance_delay);
		std::cout << erasure_string;
	}


	//Make New/Load Game Function!!!



	//Main Function
	int main()

	{

		std::cout << "Loading DM...\n";
		std::cout << "Creating Hero...\n";
		std::cout << "Herding Monsters...\n";
		std::cout << "Digging up Runes...\n";
		std::cout << "Polishing Sword... \n";
		std::cout << "Feeding Cat...\n";
		std::cout << "Exorcising Possessed Cows...\n";
		std::cout << "Composing Music...\n";
		std::cout << "Frightening Ghosts...\n";
		std::cout << "Scattering Items...\n";
		std::cout << "Drinking Ale...\n";
		std::cout << "Buttering Bread...\n";
		std::cout << "Watering Carnivorus Plant...\n";
		std::cout << "Debugging, again...\n";
		std::cout << "Yelling at Computer...\n";
		std::cout << "Smashing Keys...\n";
		std::cout << "Kidnapping Princess...\n";
		std::cout << "If you can read this, you dont need glasses... \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";
		std::cout << " \n";



			(PlaySound("C:\\Users\\Noah\\source\\repos\\CIS108_Lab10\\The Phantom Runes\\TPR\\Main.cpp\\Blocks\\Music\\The_Sojourner.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC));
		

		//Intro
		delayed_out(

			"    	 THE __    ____ _             _                      \n"
			"           | ___ \  |              | |                      \n"
			"           | |_/ / |  _    __     | |     _ ___  _ __ ___  \n"
			"           |  __/| '_ \ / _` | '_ \ | __/ _ \| '_ ` _ \      \n"
			"           | |   | | | | (_|| | | | || (_) | | | | | |     \n"
			"           |_| __|_|_|_|\__,_|_| |_|\__\___/|_| |_| |_|     \n"
			"               | ___ \                                      \n"
			"               | |_/ /    __   __   ___   ___               \n"
			"               |    / | | | '_ \ / _ \/  __\                \n"
			"               | |\ \ |_| | | | |  __/\___ \                \n"
			"               |_| \_\__,_|_| |_|\___||____/                \n"
			" \n"
			" \n");

		int menu_option;


		std::cout << "Type 'NEW' to start a new game \n";
		std::cout << " \n";
		std::cout << "Type 'LOAD' to load a saved game \n";
		std::cout << " \n";

		std::cin >> menu_option;
		if (menu_option = "NEW" || "new")
		{

			(PlaySound("C:\\Users\\Noah\\source\\repos\\CIS108_Lab10\\The Phantom Runes\\TPR\\Main.cpp\\Blocks\\Music\\start_game.wav", NULL, SND_FILENAME));

			while
				(PlaySound("C:\\Users\\Noah\\source\\repos\\CIS108_Lab10\\The Phantom Runes\\TPR\\Main.cpp\\Blocks\\Music\\all_kings_must_die.wav", NULL, SND_FILENAME | SND_LOOP | SND_ASYNC));

			//New Game Intro
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";

			delayed_out_2(
				"            Awaken, warrior of truth..."
				"\n"
				"            There has been a disturbance in \n"
				"            this world...\n"
				"\n"
				"            The Dark Nobles of Xyndur have \n"
				"            awakened from thier dark \n"
				"            slumber, \n"
				"            and they have set out to capture\n"
				"            the Runes of the Phantoms...\n"
				"\n"
				"            You are the last Sojourner,\n"
				"            only you have the power to\n"
				"            use the Runes in the name\n"
				"            of Virtue...\n"
				"\n"
				"            ...so try your best not to die, \n"
				"            alright? \n"

			);
		}

		//Load Function here...
		else if (menu_option = "LOAD" || "load")
		{
			delayed_out("\nLoading... \n");
		}


		string name;
		int option1;
		delayed_out_2("Name thyself...\n");
		cin >> name;
		player account(name, abandoned_dungeon[0], 1, 0);

		delayed_out("\nSo ");
		std::cout << account.getName();
		delayed_out(", you have finally awakened, and\n");
		delayed_out("\nwithout any memory of who you are... \n");
		delayed_out("There...is-'t much t-me, so..he-d my me-sage, \n");
		delayed_out("bef-re t-e l-ght f-des...");
		delayed_out("...t-e..loc-ti-n..fo-..th-..fi-st Rune..is n-ar \n");
		delayed_out("--e..W-lls..-f..S-l-mn..C-t-... \n");
		delayed_out("\n Hur-y..bef-re..its..t-o..l-te! \n");

		delayed_out("The shackles on your body have rusted over the years, \n");
		delayed_out("and you break free of them easily. \n");

		while (1)
		{


			Sleep(500);
			delayed_out("Type 1 to walk forward, 2 to walk left, or 3 to walk right \n");
			std::cout << "\n Type 'HELP' for a list of options \n";


			cin >> option1;
			if (option1 >= 1 && option1 <= 3)
			{
				Sleep(50 * (option1));
				srand(time(NULL));
				if (rand() % 3 == option1 - 1) {
					account = battle(account);
				}

			}
			else {
				delayed_out("\n#@#Error#@# Please enter a number between 1 and 3\n\n");
				cin.clear();
				cin.ignore();
			}

			//Help Function
			int help_option;
			{
				std::cin >> help_option;
				if (help_option = "HELP" || "help")
					delayed_out("\nType 'MAP' to look at map \n");
				delayed_out("\nType 'SAVE' to save current game \n");
			}

		}
		return 0;
	}




	//Battle Function
	player battle(player account)
	{

		string option;

		Sleep(20);
		srand(time(NULL));
		int ranM = (rand() % 3); //random monster
		int ranD = (rand() % 5) + 1; //random diff
		classMob monster(monsters[account.getLevel() - 1][ranM], account.getLevel(), account.getArea(), ranD);
		std::cout << "You encounter a " << monster.getName() << ", be ready for battle" << "\n";
		Sleep(2000);
		do
		{
			//More Battle Functions...
			std::cout << "\n\n\n [][][][][][][][][][][][][][][][][][][][]\nHP:" << account.getHealth() << "                                         " << monster.getName() << "HP:" << monster.getHealth() << " difficulty:" << monster.getDifficulty() << "\n";
			delayed_out("Write A for attack or E for escape \n");
			cin >> option;
			srand(time(NULL));
			if (option == "E" || option == "e")
			{
				if ((rand() % 2) == 1) {
					delayed_out("You made a deft escape, hope nobody saw that... \n");
					monster.setHealth(0);
				}
				else {
					delayed_out("You attempted to escape, but the monster was too quick! \n");
					delayed_out("You lose 5 health! \n");
					account.setHealth(account.getHealth() - 5);
					option = "A";
				}
			}
			if (option == "A" || option == "a")
			{
				int attack = rand() % (account.getDamage());
				srand(time(NULL));
				int mobAttack = rand() % (monster.getDamage());
				monster.setHealth(monster.getHealth() - attack);
				account.setHealth(account.getHealth() - mobAttack);
				std::cout << "You swing your blade at the monster for " << attack << " damage!\n";
				Sleep(500);
				std::cout << "The monster counter attacks for " << mobAttack << " damage!\n";
				Sleep(500);
			}
		} while (monster.getHealth() > 0 && account.getHealth() > 0);
		std::cout << "\n\n\n [][][][][][][][][][][][][][][][][][][][]\nHP:" << account.getHealth() << "                                         " << monster.getName() << "HP:" << monster.getHealth() << " difficulty:" << monster.getDifficulty() << "\n";
		if (account.getHealth() <= 0)
		{
			death();
			exit(0);
		}
		account = calcEXP(account, monster);
		return account;
	}


	//Dark Souls Stuff
	void death()
	{
		delayed_out_2("You died... \n");
		system("pause");
		main();
	}

	//XP!!!
	player calcEXP(player account, classMob monster)
	{
		delayed_out("#########\ncalculating EXP\n#########\n");
		Sleep(500);
		account.setEXP(account.getEXP() + monster.getEXP());
		std::cout << "EXP: " << account.getEXP() << "/" << account.getEXPReq() << "\n";
		if (account.getEXP() >= account.getEXPReq())
		{
			levelUp(account);
		}
		return account;
	}

	player levelUp(player account)
	{
		account.setLevel(account.getLevel() + 1);
		account.setEXPReq();
		account.setMaxHealth();
		account.setHealth(account.getMaxHealth());
		std::cout << "Your level has increased to " << account.getLevel() << "!\n";
		return account;
	}