#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "bubblesort.cpp"
#include "insertionsort.cpp"

using namespace std;

void fillArryRand(int arr[], int length){
	// initialize random seed
	srand(time(NULL));
	// initialize random variable
	int randomNum = rand() % 100 + 1;
	// fill array with random numbers between 1 and 100
	for (int i = 0; i < length; i++){
		arr[i] = rand() % 100 + 1;
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

void printArray(string name,int arr[], int length){
	cout << name << " : [";
	cout << arr[0];	
	for (int i = 1; i < length; i++){
		cout << ", "<< arr[i];
	}
	cout << "]\n" << endl;
}

int main(){
	
	// Ein unsortiertes array	
	int arr[] = {8, 5, 3, 6, 9, 2, 1, 4, 7};
	int length = sizeof(arr)/sizeof(arr[0]);

	string arrname = "myarray";

	fillArryRand(arr, length);

	printArray("original", arr, length);	

	// Anwendung von insertionsort auf das Array
	bubblesort(arr, length);

	printArray("sorted", arr, length);

	return 0;
}
