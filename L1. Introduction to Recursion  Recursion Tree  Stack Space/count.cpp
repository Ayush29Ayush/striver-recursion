#include<bits/stdc++.h>
using namespace std;

void countfunc(int cnt)
{
    // base condition
    if(cnt==4)
        return;

    else
    {
        cout<<cnt<<" ";
        cnt++;
        countfunc(cnt);
    }
}

int main()
{
    int cnt = 0;
    countfunc(cnt);
    return 0;
}