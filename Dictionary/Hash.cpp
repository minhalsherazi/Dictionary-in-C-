#include"hash.h"
//#include"LinkedList.h"
#include<fstream>
#include<iostream>
using namespace std;

void HashTable::InsertFromFile(char *file)
{
	char temp[100],temp1[100];
	int id=0;
	ifstream fin(file);
	while(!fin.eof())
	{
		fin.getline(temp,100,' ');
		fin.getline(temp1,100,'\n');
		id=temp[0]%65;
		Table[id].Insert(temp,temp1);
	}
	
}
bool HashTable::find(char * abc)
{
	int temp=0;
	int id=abc[0]%65;
	Node *ptr=Table[id].getHead();
	while(ptr)
	{
		if(strcmp(ptr->Word,abc)==0)                             //predefine function
		{
			cout<<ptr->Meaning<<endl;
			int temp=1;
			return 1;
		}
		ptr=ptr->next;
	}
	if(temp==0)
		cout<<"No results found"<<endl;
	return 0;
}