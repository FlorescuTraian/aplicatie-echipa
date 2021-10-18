#include "player.hpp"
Player::Player()
	{
		firstName="";
		secondName="";
		points=0;
	}
int Player::get_points()
	{	
		return points;
	}
istream& operator>>(istream &devi, Player &p)
	{
		devi>>p.firstName;
		devi>>p.secondName;
		devi>>p.points;
		return devi;
	} 

bool operator ==(const Player&p1, const Player&p2)
	{
		if(p1.firstName==p2.firstName && p1.secondName==p2.secondName && p1.points==p2.points)
			return true;
		else
			return false;
	}
bool operator !=(const Player&p1, const Player&p2)
	{
		return (!(p1==p2));
	}
