#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

void printList(node* start){
	
		while(start != NULL){
			cout<<start->data<<" ";
			start = start->next;
		}	
}

int size(node* start){
	int count = 0;
	while(start != NULL){
		count++;
		start = start->next;
	}

	return count;

}

bool isEmpty(node* start){
	return start==NULL;
}

int main(){

 node a;
 a.data = 1;
 node  b;
 b.data = 2;
 node c;
 c.data = 3;

 a.next = &b;
 b.next = &c;
 c.next = NULL;

 //node* head;
 //head = &a;

 printList(&a);

return 0;

}