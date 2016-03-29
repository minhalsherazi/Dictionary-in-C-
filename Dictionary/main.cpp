#include"hash.h"
//#include"LinkedList.h"
#include<iostream>
using namespace std;

void main()
{
	int x=1;

	HashTable a;
	char temp[100];
	a.InsertFromFile("file.txt");
    	while(x==1)
	{
	
	cout<<"Enter The Word : ";
	fflush(stdin);
	cin.getline(temp,100);
	a.find(temp);
	cout<<endl<<"Please enter 1 to search again any other key to exit"<<endl;
	cin>>x;
	}
	
	system("pause");
}