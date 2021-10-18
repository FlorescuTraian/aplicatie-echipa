#include "echipa.hpp"
Echipa::Echipa()
	{
		nrjucatori=0;
		nume="";
		jucatori=NULL;
	}
Echipa::Echipa(const Echipa& e)
	{
		*this=e;
	}
Echipa& Echipa::operator=(const Echipa& e)
	{
		nrjucatori=e.nrjucatori;
		nume=e.nume;
		if(e.jucatori==NULL)
				jucatori=NULL;
			else
				{
					jucatori=new Player[e.nrjucatori];
					jucatori=e.jucatori;
				}
		return *this;
	}
Echipa::~Echipa()
	{
		if(jucatori!=NULL) delete []jucatori;
	}
double Echipa::get_medie()
	{
		double medie=0;
		for(int i=0;i<nrjucatori;i++)
			medie+=jucatori[i].get_points();
		medie/=nrjucatori;
		cout<<medie<<" ";
		return medie;
	}

istream& operator>>(istream &devi, Echipa &e)
	{
		devi>>e.nrjucatori;
		getline (devi, e.nume);
		e.nume.erase(0,1);
		e.jucatori=new Player[e.nrjucatori];
		for(int j=0;j<e.nrjucatori;j++)
				devi>>e.jucatori[j];
		return devi;
	} 
ostream& operator<<(ostream &devo,const Echipa &e)
	{ 
		devo<<e.nume<<endl;
		return devo;
	}
bool operator ==(const Echipa&e1, const Echipa&e2)
	{
		if(e1.nrjucatori==e2.nrjucatori && e1.nume==e2.nume)
			{
				for(int i=0;i<e1.nrjucatori;i++)
					{
						if(e1.jucatori[i]==e2.jucatori[i])
							return true;
						else 
							return false;
					}
			}
		else
			return false;	
	}
bool operator !=(const Echipa&e1, const Echipa&e2)
	{
		return (!(e1==e2));
	}

