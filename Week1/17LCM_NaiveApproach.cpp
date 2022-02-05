#include<algorithm>


int lcm(int a, int b)
{
    int res = std::max(a,b);
    while(true)
    {
        if(res%a==0 && res%b==0)
            return res;
        res ++;
    }
    return res;
}