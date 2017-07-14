#include <iostream>
#include <vector>

using namespace std;

// Prints the vector elements
void printVec(vector<int>& ivec){
	for(auto i:ivec)
	cout<<i<<" ";
	cout<<endl;
}

// For swapping
void swap(vector<int>& ivec, int a , int b){
	int temp = ivec[a];
	ivec[a] = ivec[b];
	ivec[b] = temp;
}

// Selection Sort
void selectionSort(vector<int>& ivec){
	int size = ivec.size();
	for(int i = 0; i<size-1; ++i){
		for(int j = i+1; j < size; ++j){
			if(ivec[j] > ivec[i]);
			else
				swap(ivec, i, j);
		}
	}
}

// Insertion Sort
void insertionSort(vector<int>& ivec){
	int size = ivec.size();
	for(int unsorted = 1; unsorted < size; ++unsorted){
		for(int sorted = 0; sorted <= unsorted; ++sorted){
			if(ivec[sorted] <= ivec[unsorted]);
			else
				swap(ivec, sorted, unsorted);
		}
	}

}

// Bubble Sort
void bubbleSort(vector<int>& ivec){
	int size = ivec.size();
	bool swaped = true;
	while(swaped){
		swaped = false;
		for(int i = 0; i < size-1; i++){
			if(ivec[i] < ivec[i+1]);
			else{
				swap(ivec, i, i+1);
				swaped = true;				
			}
		}
	}

}

int main(){

vector<int> ivec = {4,7,5,3,1,9,0};
printVec(ivec);
//selectionSort(ivec);
//insertionSort(ivec);
bubbleSort(ivec);
printVec(ivec);


	return 0;
}