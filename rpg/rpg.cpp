#include<iostream>
#include <stdlib.h>
#include<string>
#include<windows.h>
using namespace std;

void cls() {
	HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hndl, &csbi);
	DWORD written;
	DWORD n = csbi.dwSize.X * csbi.dwCursorPosition.Y + csbi.dwCursorPosition.X + 1;	
	COORD curhome = {0,0};
	FillConsoleOutputCharacter(hndl, ' ', n, curhome, &written);
	csbi.srWindow.Bottom -= csbi.srWindow.Top;
	csbi.srWindow.Top = 0;
	SetConsoleWindowInfo(hndl, TRUE, &csbi.srWindow);
	SetConsoleCursorPosition(hndl, curhome);
}

class Player{
	public:
		char *name;
		int hp;
		int att;
};

class Goblin{
	public:
		int hp = 100;
		int att = 10;
};

void enemyChance(Player player){
	if(rand() % 100 + 1 < 33){ // 33% chance of encouter with enemy
		cout << player.name << " encoutered a goblin." << endl;		
		
		bool running = true;
		
		Goblin goblin;
		
		while(running == true){
			cout << "1. Fight" << endl;
			cout << "2. Flee" << endl;
			int select;
			cin >> select;
			
			switch(select){
				case 1:
					goblin.hp -= player.att;
					cout << player.name << " attacks goblin for " << player.att << " damage." << endl;
					if(goblin.hp <= 0){
						cout << player.name << " killed the goblin!" << endl;
						running = false;
					}
					break;
				case 2:
					cout << player.name << " fled" << endl;
					running = false;
					break;
				default:
					cout << "Enter a menu number." << endl;
					break;
			}
		}
	}
}

int main(){
	cls();
	cout << "<=======|==o RPG by zachdyer o==|========>\n" << endl;
	
	cout << "Enter a menu number." << endl;
	cout << "1. New Game" << endl;
	cout << "2. Quit" << endl;
	
	int select;
	cin >> select;
	
	if(select == 1){
		
		//Enter character name
		char name[20];
		cout << "Choose your character name" << endl;
		cin >> name;
		
		Player player = {name, 100, 50};
		
		bool running = true;
		int room = 1;
		
		while(running == true){
			//Begin quest
			switch(room){
				case 1:
					cls();
					enemyChance(player);
					cout << player.name << " is in a room. There is a door to your left and a staircase going up." << endl;
					cout << "1. Go left" << endl;
					cout << "2. Go upstairs" << endl;
					cout << "3. Quit" << endl;
					cin >> select;
					if(select == 1){
						room = 2;
					}
					else if(select == 2){
						room = 3;
					} 
					else if(select == 3){
						running = false;
					}
					break;
				case 2:
					cls();
					enemyChance(player);
					cout << player.name << " is in a room. There is a chest in front of you. There is a door behind you." << endl;
					cout << "1. Open chest" << endl;
					cout << "2. Go in door" << endl;
					cout << "3. Quit" << endl;
					cin >> select;
					if(select == 1){
						cout << name << " opened the chest." << endl;
						system("pause");
					}
					else if(select == 2){
						room = 1;
					}
					else if(select == 3){
						running = false;
					}
					break;
				case 3:
					cls();
					enemyChance(player);
					cout << player.name << " are in a room. There is a bed in the room. There are stairs going down." << endl;
					cout << "1. Go to bed" << endl;
					cout << "2. Go downstairs" << endl;
					cout << "3. Quit" << endl;
					cin >> select;
					if(select == 1){
						cout << player.name << " goes to bed." << endl;
					}
					else if(select == 2){
						room = 1;
					}
					else if(select == 3){
						running = false;
					}
					break;
			}
			
		}
		
		
		
	}
	cls();
	cout << "Thanks for playing RPG! No homo";
	
	return 0;
}