// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countSetBits(int res){
        int cnt = 0;
        while(res > 0){
            res = res & (res-1);
            cnt++;
        }
        
        return cnt;
    }
    
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int res = a ^ b;
        return countSetBits(res);
        
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends