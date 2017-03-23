#include <iostream>
#include "bubblesort.cpp"
#include "insertionsort.cpp"

int main(){
	
	// Ein unsortiertes array	
	int arr[] = {8, 5, 3, 6, 9, 2, 1, 4, 7};
	int length = sizeof(arr)/sizeof(arr[0]);

	// Ausgabe des Arrays
	for (int i = 0; i < length; i++){
		std::cout << arr[i];
	}	

	// new line
	std::cout << std::endl;

	// Anwendung von insertionsort auf das Array
	insertionsort(arr, length);

	// Ausgabe des resultierenden Arrays
	for ( int i = 0; i < length; i++ ){
		std::cout << arr[i];
	}

	return 0;
}
