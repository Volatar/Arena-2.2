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

struct character {
		int hp;
		int hpmax;
		int str;
		int lvl;
		int xp;
		int lvlupxp;
		int neededxp;
		int kills;
		int sword;
		int shield;
		int armor;
		int gold;
		int battledelay;
		int sldelay;
	};

struct opponent {
		int hp;
		int str;
		int lvl;
	};