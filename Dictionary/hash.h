#ifndef HASH
#define HASH_H
#include"LinkedList.h"

class HashTable
{
private:
	LinkedList Table[58];
public:
	friend LinkedList;
	void InsertFromFile(char * file);
	bool find(char *);
};

#endif