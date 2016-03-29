#include"LinkedList.h"
#include<string.h>
LinkedList::LinkedList()
{
	head=nullptr;
	curr=nullptr;
}
void LinkedList::Insert(char * a,char* b)
{
	int i;
	Node *temp;
	if(!head)
	{
		head=new Node;
		head->Word=new char[strlen(a)];
		for( i=0;i<strlen(a);i++)
			head->Word[i]=a[i];
		head->Word[i]='\0';
		head->Meaning=new char[strlen(b)];
		for( i=0;i<strlen(b);i++)
			head->Meaning[i]=b[i];
		head->Meaning[i]='\0';
		curr=head;
		head->next=nullptr;
		curr->next=nullptr;
	}
	else
	{
		Node *ptr=head;
		temp=new Node;
		temp->Word=new char[strlen(a)];
		for(i=0;i<strlen(a);i++)
			temp->Word[i]=a[i];
		temp->Word[i]='\0';
		temp->Meaning=new char[strlen(b)];
		for(i=0;i<strlen(b);i++)
			temp->Meaning[i]=b[i];
		temp->Meaning[i]='\0';
		
		curr->next=temp;
		curr=temp;
		curr->next=nullptr;
		/*while(ptr->next)
			ptr=ptr->next;
		ptr->next=temp;
		temp->next=nullptr;
	*/}
}
LinkedList::~LinkedList()
{
	delete head;
}