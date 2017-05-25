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
#include <fstream>
#include <iostream>
#include <windows.h>

using namespace std;

void save (character);
void load (character &);

void save (character player)
{
	system("cls");
	cout << "Saving:\n";
	Sleep(player.sldelay);
	ofstream outfile;
	outfile.open ("save data.txt", ios::out);
	outfile << player.hp << endl; 
	cout << "Health\n";
	Sleep(player.sldelay);
	outfile << player.hpmax << endl;
	outfile << player.str << endl;
	cout << "Strength\n";
	Sleep(player.sldelay);
	outfile << player.lvl << endl;
	cout << "Level\n";
	Sleep(player.sldelay);
	outfile << player.xp << endl;
	cout << "Experience Points\n";
	Sleep(player.sldelay);
	outfile << player.kills << endl;
	cout << "Kills\n";
	Sleep(player.sldelay);
	outfile << player.neededxp << endl;
	outfile << player.sword << endl;
	outfile << player.shield << endl;
	outfile << player.armor << endl;
	cout << "Equipment\n";
	Sleep(player.sldelay);
	outfile << player.gold << endl;
	cout << "Money\n";
	Sleep(player.sldelay);
	outfile << player.battledelay << endl;
	cout << "Preferences\n\n";
	Sleep(player.sldelay);
	outfile.close();
	cout << "File Save Complete\n\n";
	cout << "Press enter to continue...";
	cin.get();
	cin.get();
}


void load (character &player)
{
	system("cls");
	cout << "Loading:\n";
	Sleep(player.sldelay);
    ifstream infile;
	infile.open ("save data.txt", ios::in);
	infile >> player.hp; 
	cout << "Health\n";
	Sleep(player.sldelay);
	infile >> player.hpmax;
	infile >> player.str;
	cout << "Strength\n";
	Sleep(player.sldelay);
	infile >> player.lvl;
	cout << "Level\n";
	Sleep(player.sldelay);
	infile >> player.xp;
	cout << "Experience Points\n";
	Sleep(player.sldelay);
	infile >> player.kills;
	cout << "Kills\n";
	Sleep(player.sldelay);
	infile >> player.neededxp;
	infile >> player.sword;
	infile >> player.shield;
	infile >> player.armor;
	cout << "Equipment\n";
	Sleep(player.sldelay);
	infile >> player.gold;
	cout << "Money\n";
	Sleep(player.sldelay);
	infile >> player.battledelay;
	cout << "Preferences\n\n";
	Sleep(player.sldelay);
	infile.close();
	cout << "File Load Complete\n\n";
	cout << "Press enter to continue...";
	cin.get();
	cin.get();
}