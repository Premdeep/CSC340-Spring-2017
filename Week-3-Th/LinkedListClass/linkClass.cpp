#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;	
};

class linkedlist{

private:
	node* head;
	int size;

public:
	linkedlist(){
		head = NULL;
		size = 0;
	}

	linkedlist(int val){
		node* temp = new node;
		temp->data = val;
		// *(temp).next = NULL;
		temp->next = NULL;
		head = temp;
		size = 1;
	}

	void printList(){
		node* walk = head;
		while(walk != NULL){
			cout<<walk->data<<" ";
			walk = walk->next;
		}
	}

	void append(int val){
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



	// linkedlist():head(NULL),size(0){}

};

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

	return 0;
}