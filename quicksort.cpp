void swap(int arr[], int a, int b){
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

int partition(int arr[], int p, int links, int rechts){
    //Swappe Pivot und Rechts
    swap(arr, p, rechts);
    p = rechts--;            //setze den pivotzeiger auf rechts und dekrementiere rechts danach

    while(links < rechts){
      while(arr[links] < arr[p]) links++;
      while(arr[rechts] > arr[p] && rechts >= 0) rechts--;

      if (links < rechts) swap(arr, links, rechts);
    }

    int i = rechts+1;
    swap(arr, i, p);
    return i;
}

int pivot(int arr[], int links, int rechts){
    return links;
}

void quicksort (int arr[], int links, int rechts ){
    int p,i;
    if (links < rechts){
      p = pivot(arr,  rechts,  links);
      i = partition(arr, p, links, rechts);
      quicksort(arr, links, i-1);
      quicksort(arr, i+1, rechts);
    }
}
