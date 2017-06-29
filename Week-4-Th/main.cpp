#include "linkedlist.h"

int main(){

	linkedlist one;
	linkedlist two;

	for(int i = 0; i < 5; i++)
		one.append(i);
	for(int i = 0; i < 5; i++)
		two.append(i);

	one.printList();
	two.printList();	



	if(one == two)
		cout<<"lists are same"<<endl;
	else
		cout<<"not equal"<<endl;

	//delete one;



	return 0;
}