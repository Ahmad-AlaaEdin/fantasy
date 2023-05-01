#include "player.h"

player::player(string name, int po, int pr)
{
	this->name = name;
	this->points = po;
	this->price = pr;
	nextID++;
}
int player::nextID = 1;
