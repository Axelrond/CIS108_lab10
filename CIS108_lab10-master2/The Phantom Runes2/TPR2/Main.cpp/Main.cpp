//"The Phantom Runes" ver.1 (c) 2019 by Axelrond

#include <iostream>
#include <fstream>
#include <vector>
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
#include "armor.h"
#include "weapon.h"
#include "map.h"
#pragma comment(lib, "winmm.lib")
#pragma warning disable 4129
#pragma warning disable 4244
#pragma warning disable 4083

using namespace std;
using std::chrono::milliseconds;
player battle(player account);
player calcEXP(player account, classMob monster);
player levelUp(player account);
void death();

//Save/Load Function
void write() {
	ofstream filer;
	filer.open("test.txt");
	filer << "Test text file.\n";
	filer.close();
}

void read() { //get up to certian chars
	char line[20];
	ifstream filer;
	filer.open("test.txt");
	filer.getline(line, 20);
	filer.close();
	cout << line;
}

void read2() { //get entire line
	string s = "";
	ifstream filer;
	filer.open("test.txt");
	while (getline(filer, s)) {
		cout << s << endl;
	}
}


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

	

	//Main Function
	int main()

	{






		{
			write();
			read2();
		}

		(PlaySound("C:\\Users\\Noah\\source\\repos\\CIS108_lab10-redo2\\CIS108_lab10-master2\\The Phantom Runes2\\TPR2\\Main.cpp\\Blocks\\Music\\The_Sojourner.wav", NULL, SND_FILENAME | SND_ASYNC));

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

		//Intro
		delayed_out(

			"    	 THE __  ____ _            _                      \n"
			"           | ___ \  |              | |                      \n"
			"           | |_/ / |  _    __     | |     _ ___ _ __  \n"
			"           |  __/| '_ \ / _` | '_ \ | __/ _ \| '_ ` _ \\      \n"
			"           | |   | | | | (_|| | | | || (_) | | | | |  \n"
			"           |_| __|_|_|_|\__,_|_| |_|\__\___/|_| |_| |_|     \n"
			"               | ___ \                                      \n"
			"               | |_/ /    __ __   ______               \n"
			"               |    / | | | '_ \\/ _ \/  __/                \n"
			"               | |\ \ |_| | | | |  __/\___ \                \n"
			"               |_| \_\__,_|_| |_|\___||____/                \n"
			" \n"
			" \n");

		int menu_option;
		{

			std::cout << "Type 'NEW' to start a new game \n";
			std::cout << " \n";
			std::cout << "Type 'LOAD' to load a saved game \n";
			std::cout << " \n";

			std::cin >> menu_option;
			if (menu_option = "NEW" || "new") {
				{

					(PlaySound("C:\\Users\\Noah\\source\\repos\\CIS108_lab10-redo2\\CIS108_lab10-master2\\The Phantom Runes2\\TPR2\\Main.cpp\\Blocks\\Music\\start_game_new.wav", NULL, SND_FILENAME | SND_ASYNC));
					cin.ignore(1024, '\n');
					std::cout << " \n";

				}

			}
			else if (menu_option = "LOAD" || "load") {
				(PlaySound("C:\\Users\\Noah\\source\\repos\\CIS108_Lab10\\The Phantom Runes\\TPR\\Main.cpp\\Blocks\\Music\\start_game.wav", NULL, SND_FILENAME | SND_ASYNC));
				cin.ignore(1024, '\n');
				delayed_out("\nLoading... \n");
				read2();
			}

			else {
				delayed_out("\n Please enter a proper command!\n\n");
				cin.clear();
				cin.ignore();
			}
		}



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
		system("pause");
		cin.clear();
		cin.ignore();

		
			//Names
			string name;
			int option1;
			std::cout << "Now, name thyself...";
			getline(cin, name);
			cin.clear();
			cin.ignore();

			player account(name, abandoned_dungeon[0], 1, 0);
			//And so the adventure begins...
			delayed_out("As you lay in the old dungeon cell, \n");
			delayed_out("you hear a strange voice close by, \n");
			delayed_out("it reveals itself to be a shiny sprite... \n");
			Sleep(300);
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";

			std::cout << (" \n"
"				          | \n"
"          |   . \n"
"   `.  *  |     .' \n"
"     `. ._|_* .'  . \n"
"   . * .'   `.  * \n"
"-------|     |------- \n"
"   .  *`.___.' *  . \n"
"       .'  |* `.  * \n"
"    .' *  |  . `. \n"
"        . | \n"
"          | \n"
"				\n");



			cin.clear();
			cin.ignore();
			delayed_out("\nSo ");
			std::cout << account.getName() << endl;
			delayed_out(", you have finally awakened, and I\n");
			delayed_out("assume without any memory of who you were... \n");
			delayed_out("I can help, but there isnt much time,\n");
			delayed_out("so..heed my me-sage \n");
			delayed_out("bef-re the l-ght fades...");
			delayed_out("...the..locati-n..fo-..the..fi-st Rune..is near \n");
			delayed_out("t-e..Walls..of..Solemn..City... \n");
			delayed_out("\n Hurry..bef-re..its..too..l-te! \n");

			delayed_out("The shackles on your body have well rusted over the \n");
			delayed_out("years, and you break free of them easily! \n");
			std::cout << " \n";
			std::cout << " \n";
			std::cout << " \n";
			cin.clear();
			cin.ignore();
			while (1)
			{

				Sleep(500);
				delayed_out("Type 1 to walk forward, 2 to walk left, or 3 to walk right \n");

				cin >> option1;
				if (option1 >= 1 && option1 <= 3)
				{
					Sleep(50 * (option1));
					srand(time(NULL));
					if (rand() % 3 == option1 - 1) {
						account = battle(account);
					}
					{

						if (option1 = "SAVE" || "save")
							write();

						cin.clear();
						cin.ignore();
					}
					{
						if (option1 = "HELP" || "help")
							std::cout << "\nType 'SAVE' to save current game \n";
						    std::cout << "\nType 'M' to look at your map \n";
						    std::cout << "\n Type 'H' for help \n";
					}
					{
						if (option1 = "M" || "m")
							std::cout << map;
					}
				}

				else {
					delayed_out("\n Please enter a number between 1 and 3\n\n");
					cin.clear();
					cin.ignore();
				}


				

			}

			return 0;
		
	}



	//Battle Function
	player battle(player account)
	{
		(PlaySound("C:\\Users\\Noah\\source\\repos\\CIS108_lab10-redo2\\CIS108_lab10-master2\\The Phantom Runes2\\TPR2\\Main.cpp\\Blocks\\Music\\battle_music.wav", NULL, SND_FILENAME | SND_ASYNC));
		cin.clear();
		cin.ignore();

		string option;
		Sleep(20);
		srand(time(NULL));
		int ranM = (rand() % 3); //random monster
		int ranD = (rand() % 5) + 1; //random diff
		classMob monster(monsters[account.getLevel() - 1][ranM], account.getLevel(), account.getArea(), ranD);
		std::cout << "You encounter a " << monster.getName() << "! \nReady your sword!" << "\n";
		Sleep(2000);
		do
		{
			//More Battle Functions...
			std::cout << "\n\n\n [][][][][][][][][][][][][][][][][][][][]\nHP:" << account.getHealth() << "                                         " << monster.getName() << "HP:" << monster.getHealth() << " difficulty:" << monster.getDifficulty() << "\n";
			delayed_out("Write A for attack or E for escape \n");
			cin.clear();
			cin.ignore();
			cin >> option;
			srand(time(NULL));
			if (option == "E" || "e")
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

			if (option == "A" || "a")
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
		delayed_out("[][][][][][][]\ncalculating EXP\n[][][][][][][][]\n");
		Sleep(500);
		account.setEXP(account.getEXP() + monster.getEXP());
		std::cout << "EXP: " << account.getEXP() << "/" << account.getEXPReq() << "\n";
		if (account.getEXP() >= account.getEXPReq())
		{
			levelUp(account);
		}
		return account;
		cin.clear();
		cin.ignore();
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