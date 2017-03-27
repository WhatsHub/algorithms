void selectionsort(int arr[], int length){
    int min,temp;
    for(int i = 0; i < length - 1; i++){
        min = i;
        // Suche nächst kleinstem Element
        for (int j = i + 1; j < length; j++){
            if(arr[min] > arr[j]) min = j;
        }
        // Swappe aktuelles und nächst kleinstes Element
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}