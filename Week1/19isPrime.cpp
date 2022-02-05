#include <iostream>
#include <limits.h>
using namespace std;

 bool isPrime(int n)
{
	if(n==1)
		return false;

	for(int i=2; i*i<=n; i++) // checks till square root of n because we WILL find a divisor till square root if it is non prime
	{
		if(n % i == 0)
			return false; 
	}

	return true;
}

int main() {
    
    	int n = 65;
    	
    	printf("%s", isPrime(n) ? "true" : "false");
    	
    	return 0;
}

// Time Complexity -> O(sqrt(n))