#include "player.hpp"
class Echipa
{
	private:
   		int nrjucatori;
    	string nume;
    	Player *jucatori;
    public:
    	Echipa();
    	Echipa(const Echipa& e);
    	Echipa& operator=(const Echipa& e);
    	~Echipa();
    	double get_medie();
    	friend istream& operator>>(istream &devi, Echipa &e);
    	friend ostream& operator<<(ostream &devo,const Echipa &e);
    	friend bool operator ==(const Echipa&e1, const Echipa&e2);
    	friend bool operator !=(const Echipa&e1, const Echipa&e2);
};
