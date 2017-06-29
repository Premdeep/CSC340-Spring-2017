// HeaderFile (Interface)
#include <iostream>
using namespace std;

#pragma once

struct node{
	int data;
	node* next;	
};


class linkedlist{

private:
	node* head;
	int size;

public:
	linkedlist();
	linkedlist(int val);
	~linkedlist();
	void printList();
	void append(int val);
	void pushFront(int val);
	void pop();
	bool operator==(const linkedlist& rhs);
	int listSize();
	
};