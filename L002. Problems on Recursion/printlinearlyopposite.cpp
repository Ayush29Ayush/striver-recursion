#include<bits/stdc++.h>
using namespace std;

void printfunc(int i, int N)
{
    if(i<1)
        return;

    cout<<i<<" ";
    i--;
    printfunc(i, N);
}

int main()
{
    int N = 4;
    // int i = 0;
    printfunc(N,N);
    
    return 0;
}