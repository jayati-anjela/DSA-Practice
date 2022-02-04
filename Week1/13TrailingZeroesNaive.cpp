int countZero(int n)
{
    int fact = 1;
    // calc factorial
    for(int i=2; i<=n; i++)
    {
        fact = fact * i;
    }

    // this part counts the trailing zeroes
    int res = 0;
    while(fact%10==0)
    {
        res++;
        fact = fact/10;
    }
    return res;
}

// causes overflow for higher values of n
//  Time Complexity Theta n