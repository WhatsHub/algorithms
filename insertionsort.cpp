void insertionsort (int arr[], int length){

	// Zähler j, Zwischenspeicher temp
	int j, temp;

	// für jedes Element des Arrays
	for (int i = 0; i < length; i++){

		// Zähler j wird auf den Index des nächsten Elements gesetzt
		j = i;

		// Solange j > 0 und das aktuelle Element ist größer als Vorgänger
		while ( j > 0 && arr[j] < arr[j-1] ){

			// Swappe aktuelles Element und seinen Vorgänger
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--;
		}
	}	
}