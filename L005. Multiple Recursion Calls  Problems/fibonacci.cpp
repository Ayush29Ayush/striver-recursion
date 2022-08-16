#include<bits/stdc++.h>
using namespace std;

// !TC->O(2^n) i.e exponential

int fib(int n)
{
    //base case
    if(n<=1)
    {
        return n;
    }

    int last = fib(n-1);
    int seclast = fib(n-2);
    return last + seclast;
}

int main()
{
    int n = 4;
    int ans = fib(n);
    cout<<ans;
    return 0;
}