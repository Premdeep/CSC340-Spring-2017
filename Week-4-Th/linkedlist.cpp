// Implementation file
#include "linkedlist.h"

	linkedlist::linkedlist(){
		head = NULL;
		size = 0;
	}

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
		cout<<endl;
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
		size++;
	}

	void linkedlist::pop(){
		if(head == NULL)
			return;
		else{
			node* first = head;
			head = head->next;
			delete first;
			first = NULL;
			size--;
		}


	}

	linkedlist::~linkedlist(){
		cout<<"in destructor"<<endl;
		if(head == NULL)
			return;
		node* temp;
		while(head != NULL){
			temp = head;
			head = head->next;
			delete temp;
			temp = NULL;
		}
		head = NULL;
		size = 0;
	}

	bool linkedlist::operator==(const linkedlist& rhs){
			if(head == rhs.head)
				return true;
			if(size != rhs.size)
				return false;
			node* lhshead = head;
			node* rhshead = rhs.head;

			int lsize = size;
			while(lsize -- != 0){
				if(lhshead->data != rhshead->data)
					return false;
				lhshead = lhshead->next;
				rhshead = rhshead->next;
			}
			return true;
	}

	int linkedlist::listSize(){
		return size;
	}



	// linkedlist():head(NULL),size(0){}
		