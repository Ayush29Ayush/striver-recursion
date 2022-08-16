#include<bits/stdc++.h>
using namespace std;

void func(int i, int sum)
{
    // base case
    if(i<1)
    {
        cout<<sum<<" ";
        return;
    }
    func(i-1,sum+i);
}

int main()
{
    int N = 3;
    int sum = 0;
    func(N,sum);
    return 0;
}