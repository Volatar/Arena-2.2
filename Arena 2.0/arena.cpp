//Copyright 2008 Taylor Sanderson, Micah Johnson
//Arena is distributed under the GPL v3

/*  This file is part of Arena.

    Arena is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Arena is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Arena.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "structure.h"
#include "fight.h"
#include "equip.h"
#include "store.h"
#include "saveload.h"
#include "options.h"

using namespace std;

void menudisplay();
void setinitialstats(character &);

int main()
{
    
    int goldgained, equipfind, equipvalue, menuchoice;
    
	character player;
	opponent enemy;

    srand((unsigned)time(0)); //seed the random numbers
    
    setinitialstats(player); //initial variable setup
    
    cout << "Welcome to the Arena!\n\n"; // and here is a sort of welcome message
	cout << "Press Enter to continue.";

	cin.get();


  while (true)
  {
	  system("cls");
	  displaystats(player);
      menudisplay();
      cin >> menuchoice;


          switch (menuchoice)
             {
             case 1:      fight(player, enemy, equipfind, equipvalue, goldgained); //fight.h
                          continue;
             case 2:      equip(); //equip.h
                          continue;
             case 3:      store(); //store.h
                          continue;
             case 4:      save(player); //saveload.h
                          continue;
             case 5:      load(player); //saveload.h
                          continue;
			 case 6:      optionsmenu(player); //options.h
		   				  continue;
             case 7:      scoring(player); //fight.h
             default:     cout << "That is not a valid choice\n\n";
						  Sleep(1000);
                          continue;
             }  
  }

  return 0;
} // end of main function

void menudisplay()
{
cout << "     1:      Fight an opponent!\n";
cout << "     2:      Manage Equipment  \n";
cout << "     3:      Visit the store   \n";
cout << "     4:      Save              \n";
cout << "     5:      Load              \n";
cout << "     6:      Options Menu      \n";
cout << "     7:      Exit              \n";

cout << endl << endl << "Input your choice: ";
}
     
void setinitialstats (character &player) //this is a seperate function only to clean up main, no other reason
{
    player.hp = 100;
    player.hpmax = 100;
    player.str = 10;
    player.lvl = 1;
    player.xp = 0;
    player.kills = 0;
    player.sword = 0;
    player.shield = 0;
    player.armor = 0;
    player.lvlupxp = 0;
	player.gold = 0;
	player.battledelay = 500;
	player.sldelay = 500;
}