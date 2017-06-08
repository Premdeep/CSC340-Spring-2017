#include <iostream>
using namespace std;

int main(){

	int x = 5;

	//int& y = x;

	int* y = &x;

	cout<<"value of x : "<<x<<endl;
	cout<<"value of y : "<<y<<endl;
	cout<<"Address of x: "<<&x<<endl;
	cout<<"Address of y: "<<&y<<endl;


}