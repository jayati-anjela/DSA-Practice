// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
            /*
	        We simply XOR the two numbers and check for 
	        the Right Most Set Bit : 
            */
        if(m==n)
            return -1; 
        int x=m^n; 
        int pos=1; 
        while((x&1)!=1){ 

            x=x>>1; 
            pos++; 
        }
        return pos;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends