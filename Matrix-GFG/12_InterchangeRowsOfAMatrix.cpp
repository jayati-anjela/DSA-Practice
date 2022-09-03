// Input:
// n1 = 4, m1 = 4
// matrix[][] = {{1, 2, 3, 4},
//              {5, 6, 7, 8},
//              {9, 10, 11, 12},
//              {13, 14, 15,16}}
// Output: 
// 13 14 15 16 9 10 11 12 5 6 7 8 1 2 3 4
// Explanation:
// Matrix after exchanging rows:
// 13 14 15 16
//  9 10 11 12
//  5  6  7  8
//  1  2  3  4
// Note: Output is printed row-wise linearly. 



//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{   
    public:
    //Function to interchange the rows of a matrix.
    void interchangeRows(vector<vector<int> > &matrix)
    {
        // code here 
        for(int i = 0; i < matrix[0].size(); i++){
           for(int j = 0; j < matrix.size()/2; j++){
               int temp = matrix[j][i];
               matrix[j][i] = matrix[(matrix.size() - 1) - j][i];
               matrix[(matrix.size() - 1) - j][i] = temp;
           }
       }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.interchangeRows(matrix);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends