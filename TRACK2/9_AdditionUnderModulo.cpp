// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
        long long M = 1000000007;
       // a+b mod M = (a mod M + b mod M)mod M
       return  (a % M + b % M)%M;
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long a;
	    long long b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.sumUnderModulo(a,b)<<endl;
	}
	return 0;
}  // } Driver Code Ends