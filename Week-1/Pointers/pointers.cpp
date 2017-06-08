#include <iostream>
using namespace std;

int main(){
	
	int x = 5;
	cout<<"x is :"<<x<<endl;
	cout<<"Address of x : "<<&x<<endl<<endl;

	int* p = &x;
	//p = &x;
	cout<<"p is: "<<p<<endl;
	cout<<"Addres of p :"<<&p<<endl;
	cout<<"value p points to : "<<*p<<endl<<endl;

	int** q;
	q = &p;

	cout<<"q is : "<<q<<endl;
	cout<<"*q is :"<<*q<<endl;
	cout<<"**q is :"<<**q<<endl;


	

return 0;
	
}