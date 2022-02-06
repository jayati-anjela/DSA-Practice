// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double get_underroot(int a, int b, int c) {
      return (double)(pow(b, 2) - (4 * a * c));
    }
    
    double get_root(int a, int b, int c, bool flag) {
      double negative_b = -1 * b,
             a_times_2 = 2 * a,
             d = sqrt(get_underroot(a, b, c));
        
      if (d == 0)
        return (negative_b / a_times_2);
      else {
        if (flag) // -b + ...
          return (double)((negative_b + d) / a_times_2);
        else // -b - ...
          return (double)((negative_b - d) / a_times_2);
      }
    }
    
    vector<int> quadraticRoots(int a, int b, int c) {
      double underroot_value = get_underroot(a, b, c);
      if (underroot_value < (double)0) 
        return vector<int>(1, -1);
        
      vector<int> result(2);
      result[0] = (int)floor(get_root(a, b, c, true));
      result[1] = (int)floor(get_root(a, b, c, false));
      if (result[1] > result[0]) swap(result[0], result[1]);
      return result;
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;