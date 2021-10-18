#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
#include <list>
using namespace std;
#pragma once
class Player
{
	private:
   		string firstName;
    	string secondName;
    	int points;
    public:
    	Player();
    	int get_points();
    	friend ostream& operator<<(ostream &devo,const Player &p);
    	friend istream& operator>>(istream &devi, Player &p);
    	friend bool operator ==(const Player&p1, const Player&p2);
    	friend bool operator !=(const Player&p1, const Player&p2);
};
