#include <iostream>
#include <limits.h>
using namespace std;

    // using bitwise operators make it faster,, store in long long since val can be high
 int power(int x, int n)
{
	int res = 1;
    while(n>0)
    {
        if(n & 1) // &1 used to check whether odd or not (val is non zero only when n is odd)
            res = res*x; // can be done in modulo m in case of high result
        
        x = x*x; // can be done in modulo m in case of high result
        n = n>>1; // n >>1 means n is being divided by 2
    } 
    return res;
}
int main() {
    
    int x = 3, n = 5;

	cout<<power(x, n);
}

// log n time complexity + O(1) Auxilary space