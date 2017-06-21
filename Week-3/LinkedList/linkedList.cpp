#include <iostream>
using namespace std;

class linkedList{

private:
	struct node{
		int data;
		node* next;		
	};
	node* head;
	int size;

public:
	linkedList(){
		head = NULL;
		size = 0;
	}

	int listSize(){
		return size;
	}

	linkedList(int value){
		//node temp;
		node* temp = new node;
		temp->data = value;
		*(temp).next = NULL;
		head = temp;
		size = 1;
	}

	void insertFront(int value){

		node* temp = new node;
		temp->data = value;
		temp->next = NULL;
		if(head == NULL)
			head = temp;
		else{
			temp->next = head;
			head = temp;
		}

	}


};