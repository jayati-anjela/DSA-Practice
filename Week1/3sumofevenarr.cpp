int func(int arr[], int n){

    if (n%2 != 0)
        return 0;
    
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

// O(n)