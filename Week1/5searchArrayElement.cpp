int searcharr(int arr[], int n, int x) { // n is num of elements in array, x is the element to be searched

    for(int i=0; i<n; i++){
        if(arr[i]==x) return i;
    }
    return -1;
}

// Best (in case x is first element ) - O(constant)
//  Worst (element not present ) - Linear