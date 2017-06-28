#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;	
};

// INterface (Header File)

class linkedlist{

private:
	node* head;
	int size;

public:
	linkedlist();
	linkedlist(int val);
	void printList();
	void append(int val);
	void pushFront(int val);
	void pop();

};

	// IMPLEMENTAION File
	linkedlist::linkedlist(){
		head = NULL;
		size = 0;
	}

	// linkedlist():head(NULL),size(0){}

	linkedlist::linkedlist(int val){
		node* temp = new node;
		temp->data = val;
		// *(temp).next = NULL;
		temp->next = NULL;
		head = temp;
		size = 1;
	}

	void linkedlist::printList(){
		node* walk = head;
		while(walk != NULL){
			cout<<walk->data<<" ";
			walk = walk->next;
		}
	}

	void linkedlist::append(int val){
		node* temp = new node;
		temp->data = val;
		temp->next = NULL;

		if(head == NULL)
			head = temp;
		else{
			node* last = head;
			while(last->next != NULL)
					last = last->next;
			last->next = temp;

		}

		size++;		
	}

	void linkedlist::pushFront(int val){
		node* first = new node;
		first->data = val;
		first->next = head;
		head = first;
	}

	void linkedlist::pop(){
		if(head == NULL)
			return;
		else{
			node* first = head;
			head = head->next;
			delete first;
			first = NULL;
		}


	}


// Main File (User Application File)

#include "linkedlist.h"
	
int main(){

	linkedlist l;
	linkedlist l1(5);

	cout<<"l is :"<<endl;
	l.printList();
	cout<<"l1 is :";
	l1.printList();
	cout<<endl;

	for(int i = 5; i < 10; i++)
		l.append(i);

	cout<<" l is :";
	l.printList();
	cout<<endl;

	for(int i = 4; i>0; i--)
		l.pushFront(i);

	cout<<" l is :";
	l.printList();
	cout<<endl;

	l.pop();
	l.pop();

	cout<<" l is :";
	l.printList();
	cout<<endl;

	return 0;
}