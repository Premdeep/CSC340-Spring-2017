#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream input;
	input.open("numbers.txt");

	if(input.fail())
		cout<<"Failed to open"<<endl;
	else
		cout<<"success"<<endl;

	//input.seekg(12);

	int i;
	while(true){
		//cout<<"tellg before : "<<input.tellg()<<endl;
		input>>i;
		if(input.fail())
			break;
	
		//cout<<"tellg after : "<<input.tellg()<<endl<<endl;
		cout<<i<<endl;
		}

	return 0;

}