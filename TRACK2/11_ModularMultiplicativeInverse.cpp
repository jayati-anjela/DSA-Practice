// { Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    int modInverse(int a, int m)
    {
        //Your code here
        for (int x = 1; x < m; x++) // loop for m times
        {if (((a%m) * (x%m)) % m == 1) // the inverse would be a number from 1 to m-1 i suppose
                                      // so (mod of a * mod of x) mod should be 1
                                      // if checks for the statement and the val of x gets printed
                                      // when it satisfies the eq
            return x;
        }
        return -1; 
    }
};

// { Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		Solution ob;
		//calling function modInverse()
		cout << ob.modInverse(a, m)<<endl;
	}
    return 0;
}  // } Driver Code Ends