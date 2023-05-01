#pragma once


#include<string>
using namespace std;

class player {
public:
	int ID;
	string name;
	int points;
	int price;
	static int nextID ;
	player(string name, int po, int pr);

};