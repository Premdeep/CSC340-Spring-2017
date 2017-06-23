#include <iostream>
using namespace std;

// header file

class spaceShip{

private:
	int ligths;
	string name;
public:

	spaceShip();
	int getLights();
	string getName();
	void setLights(int val);

};

// implementation file

spaceShip::spaceShip():ligths(5),name("alien"){}

int spaceShip::getLights(){
	return ligths;
}

string spaceShip::getName(){
	return name;
}

void spaceShip::setLights(int val){
	ligths = val;
}

ostream& operator<<(ostream& out, spaceShip& rhs){
	cout<<"ligths: "<<rhs.getLights()<<endl;
	cout<<"name: "<<rhs.getName()<<endl;
	return out;
}





int main()
{
	spaceShip s;
	spaceShip s1;
	s1.setLights(3);
	cout<<s.getLights()<<endl;
	cout<<s;
	
	return 0;
}