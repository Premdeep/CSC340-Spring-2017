#include <iostream>
using namespace std;

int square(int& x){

	 cout<<"in square"<<endl;
	// cout<<"x is :"<<x<<endl;
	 cout<<" Address of x : "<<&x<<endl;

	x = x+5;
	cout<<" x in square is: "<<x<<endl;

	return x*x;
}

int main(){

	int x = 5;
	 cout<<"In main"<<endl;
	 cout<<"x is : "<<x<<endl;
	 cout<<"Address of x :"<<&x<<endl;
	int y = square(x);
	cout<<"y is :"<<y<<endl;
	//cout<<"x in main :"<<x<<endl;

	return 0;


}