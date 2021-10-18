#include "lista.hpp"
Lista::Lista()
	{
		head=NULL;
	}
void Lista::AddAtBeggining(Echipa v)
	{
		NodePtr n=new node;
		n->val=v;
		n->next=head;
		head=n;
	}
void Lista::deleteechipa(Echipa v)
	{
		NodePtr headcopy=head;
		if(headcopy->val==v)
			{
				head=head->next;
				free(headcopy);
				return;
			}
		NodePtr aux=head;
		while(headcopy!=NULL)
			{
				if(headcopy->val!=v)
					{
						aux=headcopy;
						headcopy=headcopy->next;
					}
				else
					{
						aux->next=headcopy->next;
						free(headcopy);
						return;
					}
			}
	}
void Lista::afisarelista(ofstream& rezultate)
	{
		NodePtr headcopy=head;
		while(headcopy!=NULL)
			{
				rezultate<<headcopy->val;
				headcopy=headcopy->next;
			}
		
	}
void Lista::findminim() 
	{
    	NodePtr headcopy;
    	Echipa min;
    	headcopy=head;
    	min=headcopy->val;
    	while (headcopy!=NULL) 
			{
        		if (headcopy->val.get_medie()<min.get_medie()) 
				{
            		min=headcopy->val;
        		}
        		headcopy=headcopy->next;
    		}
    	deleteechipa(min);
}
