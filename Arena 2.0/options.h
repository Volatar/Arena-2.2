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

using namespace std;

void optionsmenu(character &);
void changebattledelay(int &);
void changesldelay(int &);
void optionsmenu();

void optionsmenu(character &player)
{
	int optionchoice;

	while (true)
	{
		system("cls");
		optionsmenu();
		cin >> optionchoice;

		switch (optionchoice)
		{
			case 1:		changebattledelay(player.battledelay);
						continue;
			case 2:		changesldelay(player.sldelay);
						continue;
			case 3:		break;
			default:    cout << "That is not a valid choice\n\n";
						cin.get();
						continue;
		}

		break;
	}
}

void changebattledelay(int &battledelay)
{
	system ("cls");
	float time, input;
	cout << "This is the current delay between attacks in battle\n\n";
	time = (float)battledelay / 1000;
	cout << time << " seconds\n\n";
	cout << "Input the new delay period (in seconds, examples: 3, 15, .2): ";
	cin >> input;
	input = input * 1000;
	battledelay = (int)input;
}

void changesldelay(int &sldelay)
{
	system ("cls");
	float time, input;
	cout << "This is the current delay between each attribue when saving and loading\n\n";
	time = (float)sldelay / 1000;
	cout << time << " seconds\n\n";
	cout << "Input the new delay period (in seconds, examples: 3, 15, .2): ";
	cin >> input;
	input = input * 1000;
	sldelay = (int)input;
}

void optionsmenu()
{
	cout << "     1:      Change battle delay\n";
	cout << "     2:      Change Saving/Loading delay\n";
	cout << "     3:      Return to main menu\n";

	cout << "\n\nInput your choice: ";
}