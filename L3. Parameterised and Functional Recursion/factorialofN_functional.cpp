#include<bits/stdc++.h>
using namespace std;

int func(int N)
{
    //base case
    if(N==0)
        return 1;

    return (N*func(N-1));
    
}

int main()
{
    int N = 4;
    int factorial = func(N);
    cout<<factorial;
    return 0;
}