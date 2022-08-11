#include<bits/stdc++.h>
using namespace std;

void printfunc(int i, int N)
{
    if(i>N)
        return;

    printfunc(i+1, N);
    cout<<i<<" ";
    
}

int main()
{
    int N = 4;
    int i = 1;
    printfunc(i,N);
    
    return 0;
}