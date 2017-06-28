#include <iostream>
#include <fstream>
using namespace std;
int main(){

	fstream output;
	output.open("file.txt");

	if(output.fail())
		cout<<"faliled"<<endl;
	else
		cout<<"success"<<endl;

	for(int i=0; i<10; i++){
		cout<<"tellg before : "<<output.tellg()<<endl;
		output<<i<<endl;
		cout<<"tell g after :"<<output.tellg()<<endl<<endl;
	}

	return 0;
}