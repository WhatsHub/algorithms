
// Bubblesort algorithm
void bubblesort (int arr[], int length){

	// Bubble Sort Starts Here
  int temp;

	for(int i=0; i<=length; i++){
		for(int j=0; j<length; j++){

			//Swapping element in if statement    
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;        
			}

		}         
	} 

}