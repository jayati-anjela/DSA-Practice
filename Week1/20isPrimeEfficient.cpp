#include <iostream>
#include <limits.h>
using namespace std;

 bool isPrime(int n)
{
	if(n==1) // 1 is neither prime nor composite
		return false;

	if(n==2 || n==3) // we know these two are prime 
		return true;

	if(n%2==0 || n%3==0) // this check cuts down almost more than half, now only iterations 6n+1 or 6n-1 matter
		return false;

	for(int i=5; i*i<=n; i=i+6) // i=5 because before that all of the num is taken care of. i*i<=n checks till sqrt of n, 
                                // i=i+6 ?? 5 7 11 13 17 19 23 25
                                // if i=5 then i=i+6 = 11 now in the if statement we check for i(5) and i+2 (7), hence we 
                                // iterate by six to reach 11 and check for 11 and 13 (and so forth)
	{
		if(n % i == 0 || n % (i + 2) == 0)
			return false; 
	}

	return true;
}

int main() {
    
    	int n = 1031;
    	
    	printf("%s", isPrime(n) ? "true" : "false");
    	
    	return 0;
}

// Time complexity -> 