#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        vector<int> v;
        
        int upper = 0, lower = 0;
        
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(j > i)
                    upper += matrix[i][j];
                
                else if(j < i)
                    lower += matrix[i][j];
                    
                else
                {
                    upper += matrix[i][j];
                    lower += matrix[i][j];
                }
            }
        }
        
        
        v.push_back(upper);
        v.push_back(lower);
        
        
        return v;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 
        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }
        Solution ob;
        vector<int> result = ob.sumTriangles(matrix,n);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends