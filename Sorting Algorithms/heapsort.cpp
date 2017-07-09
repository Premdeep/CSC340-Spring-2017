#include <iostream>
using namespace std;



void swap(int* arr, int a, int b){
		int temp = arr[a];
		arr[a] = arr[b];
		arr[b] = temp;
}

// To make the array as a max heap (Max element bubble up to top)
void heapify(int* arr, int size, int level){

	int left = 2*level+1;
	int right = 2*level+2;

	int max = level;

	if(left < size && arr[max] < arr[left])
		max = left;
	if(right < size && arr[max] < arr[right])
		max = right;

	if(max != level){
		swap(arr, level, max);
		heapify(arr, size, max);
	}

}


// Heap Sort Algorithm
void heapSort(int* arr, int size){	

	heapify(arr, size, 0);

	for(int i = size-1; i >0; i--){
		swap(arr, i, 0);  // Removing the max element and placing it at the last index.
		heapify(arr, i, 0);
	}
}



int main(){

	//int arr[6] = {12,11,13,5,6,7};
	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	cout<<"Before Heap Sort"<<endl;
	for(auto i:arr)
		cout<<i<<" ";
	cout<<endl;	
	heapSort(arr, 10);
	cout<<"after Heap Sort"<<endl;
	for(auto i:arr)
		cout<<i<<" ";
	cout<<endl;


	return 0;
}