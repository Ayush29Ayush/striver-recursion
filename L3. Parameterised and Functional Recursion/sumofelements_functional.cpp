#include<bits/stdc++.h>
using namespace std;

int func(int N)
{
    //base case
    if(N==0)
        return 0;
    
    return (N + func(N-1));
}

int main()
{
    int N = 3;
    int sum = func(N);
    cout<<sum;
    return 0;
}