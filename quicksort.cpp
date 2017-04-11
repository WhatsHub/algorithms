void swap(int arr[], int a, int b){
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void partition(int arr[], int p, int links, int rechts){
    //Swappe Pivot und Rechts
    swap(arr, p, rechts);
    p = rechts--;            //setze den pivotzeiger auf rechts und dekrementiere rechts danach

    while(links < rechts){
        //TODO
    }
}

void pivot(int arr[], int links, int rechts){
    return links;
}

void quicksort (int arr[], int links, int rechts ){
    int p,i;
    if (links < rechts){
        p = pivot(int arr[], links, rechts);
        i = partition(int arr[], p, links, rechts);
        quicksort(int arr[], links, i-1);
        quicksort(int arr[], i+1, rechts);
    }
}