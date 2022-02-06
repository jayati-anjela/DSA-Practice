// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        //Your code here
        int count=0; // if the number has exactly three divisors it is the square of a prime num
                     // that is. 2(prime num) * 2 = 4 so 4 is square of prime num 2 and has 3
                     // factors: 1, 2, 2
       for(int i=2;i*i<=N;i++) // checking prime numbers till sqrt of n
       {
           if(IsPrime(i))
           {
              count++; // counting all num with 3 factors aka prime num
           }
       }
       
       return count;
   }
   bool IsPrime(int N)
   {
       if(N==1) return false;
       
       if(N==2 || N==3) return true;
       
       if(N%2==0 || N%3==0) return false;
       
       for(int i=5;i*i<=N;i=i+6)
       {
           if(N%i==0 || N%(i+2)==0) 
            return false;
       }
       return true;
   }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends