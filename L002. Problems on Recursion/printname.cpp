#include<bits/stdc++.h>
using namespace std;

void printfunc(string str, int cnt, int N)
{
    if(cnt==N)
        return;

    cout<<str<<" ";
    cnt++;
    printfunc(str, cnt, N);
}

int main()
{
    string str = "AYUSH";
    int N = 4;
    int cnt = 0;
    printfunc(str,cnt,N);
    
    return 0;
}