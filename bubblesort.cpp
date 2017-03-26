#include <iostream>

void bubblesort (int arr[], int length){

	int temp;

	for(int i=0; i < length; i++){
		// Compare every field with it's successor
		for(int j=0; j < length-1; j++){
			//Swap a number with it's successor if the number is greater
			if(arr[j]>arr[j+1]){
				temp =  arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;        
			}
		}         
	} 
}