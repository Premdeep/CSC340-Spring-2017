#include <iostream>
using namespace std;

void printArray(int* a, int size){
	for(int i = 0; i < size; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void swap(int* arr, int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;	
}

// Pivot operation performs some series of swapping to arrange items in a particular order.
// meaning, we choose a random value (for simplicity  we choose last element ) as a pivot.
// Then we will perform some computation to bring all the elements <(less) than pivot to its left
// and all the elements greather (>=) than pivot to its right. Finally we will return the new index location
// of the pivot.
int pivot(int* arr, int si, int ei){
	// we dont need to perform the pivot operation if the array 
	// contains only one element. i.e ei-si = 0; then we can just return
	// either si or ei as a return value. (since both ei & si are same incase of a single element.)
	// if array contains more than one element then ei-si becomes > 0;
	// then we perform our pivot operation.
	if(ei-si > 0){
		int walk = si;
		int p = si;

		// Here we considered element at last index as our pivot.
		// i.e arr[ei] is our pivot.
		// Now below loop will bring all elements less than (<) pivot to its left.
		// and all the elements (>) greather than or equal to pivot to its right.
		while(walk < ei){
			if(arr[walk] >= arr[ei])
				walk++;
			else{
				swap(arr, walk, p);
				walk++;
				p++;
			}
		}
		// Final swap to complete the pivot operation
		swap(arr, ei, p);
		return p;
	}
	// Base case when array contains only one element (si = ei)
	return si;
}

void quickSort(int* arr, int si, int ei){
	if(ei-si > 0){
		int p = pivot(arr, si, ei);
		quickSort(arr, si, p-1);
		quickSort(arr, p+1, ei);
	}
}

int main(){

	int arr[6] = {1,6,5,2,4,3};
	cout<<"Array before quick sort: ";
	printArray(arr, 6);
	quickSort(arr, 0, 5);
	cout<<"Array after quick sort: ";
	printArray(arr, 6);

	return 0;

}