#include "echipa.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	ifstream date;
	ofstream rezultate("r.txt");
	date.open("d.TXT");
	int nrechipe;
	date>>nrechipe;
	list<Echipa> echipe;
	list<Echipa>::iterator it=echipe.begin();
	for(int i=0;i<nrechipe;i++)
		{
			Echipa *v=new Echipa[nrechipe];
			date>>v[i];
			echipe.push_front(v[i]);
		}
	while(ceil(log2(nrechipe))!= floor(log2(nrechipe)))
		{	
			Echipa *min=new Echipa;
			*min=*it;
			for (it=echipe.begin();it!=echipe.end();it++)
				{
					if(min->get_medie()>it->get_medie())
						*min=*it;
				}
			echipe.remove(*min); 
			nrechipe--;
		}
	for(it=echipe.begin();it!=echipe.end();it++)
		{
    		rezultate<<*it<<endl;
		}
	date.close();
	rezultate.close();
	
	return 0;
}
