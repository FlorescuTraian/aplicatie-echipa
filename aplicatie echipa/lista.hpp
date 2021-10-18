#include "echipa.hpp"
class Lista
{
	private:
		
		typedef struct node
		{
			Echipa val;
			node* next;
		}* NodePtr;
		
		NodePtr head;
	public:
		Lista();
		void AddAtBeggining(Echipa v);
		void deleteechipa(Echipa v);
		void afisarelista(ofstream& rezultate);
		void findminim();	
};
