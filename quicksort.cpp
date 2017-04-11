
void partition(int arr[], links, rechts){
    //TODO
}

void pivot(int arr[], links, rechts){
    //TODO
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