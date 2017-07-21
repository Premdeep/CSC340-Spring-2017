#include <iostream>
using namespace std;

void stupid(int n)
{
	if (n <= 1) {
		cout << n << endl;
		return;
	}

	stupid(n - 1);
	stupid(n - 2);
	stupid(n - 3);
	
}

int main()
{
	stupid(5);
	
	return 0;
}

