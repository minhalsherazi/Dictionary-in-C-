#ifndef LINKEDLIST
#define LINKEDLIST_H

struct Node
{
	char * Word;
	char * Meaning;
	Node * next;
Node()
{
	Word=nullptr;
	Meaning=nullptr;
}
};

class LinkedList
{
private:
		Node * head;
		Node*curr;
public:
		LinkedList();
		void Insert(char * a,char* b);
		Node* getHead()
		{
			return head;
		}
		~LinkedList();
};
#endif