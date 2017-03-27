#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <string>
#include "bubblesort.cpp"
#include "insertionsort.cpp"
#include "selectionsort.cpp"

using namespace std;
using namespace std::chrono;

void fillArrRand(int arr[], int length){
	// fill array with random numbers between 1 and 100
	for (int i = 0; i < length; i++){
		arr[i] = rand() % length + 1;
	}
}

void printArray(string name,int arr[], int length){
	cout << name << " : [";
	cout << arr[0];	
	for (int i = 1; i < length; i++){
		cout << ", "<< arr[i];
	}
	cout << "]" << endl;
}

int main(){

	// initialize random seed
	srand(time(NULL));

	int arrlength = 10;
	// Ein unsortiertes array	
	int arr[arrlength];
	// >-----------------------------------Bubblesort-----------------------------------<
	cout << "\nBubblesort: \n" << endl;
	// Array mit zufälligen werten befüllen
	fillArrRand(arr, arrlength);
	// Array ausgeben
	printArray("original", arr, arrlength);	
	// Anwendung von Bubblesort auf das Array
	bubblesort(arr, arrlength);
	printArray("sorted", arr, arrlength);
	// >-----------------------------------Insertionsort-----------------------------------<
	cout << "\nInsertionsort: \n" << endl;
	fillArrRand(arr, arrlength);
	printArray("original", arr, arrlength);	
	insertionsort(arr, arrlength);
	printArray("sorted", arr, arrlength);

	// >-----------------------------------Selectionsort-----------------------------------<
	cout << "\nSelectionsort: \n" << endl;
	fillArrRand(arr, arrlength);
	printArray("original", arr, arrlength);	
	selectionsort(arr, arrlength);
	printArray("sorted", arr, arrlength);
	return 0;
}
