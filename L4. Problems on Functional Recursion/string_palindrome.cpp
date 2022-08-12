#include<bits/stdc++.h>
using namespace std;



bool func(string str, int start, int end)
{
    //base case
    if(start>=end)
        return true;

    if(str[start]==str[end])
        return func(str,start+1,end-1);
    else
        return false;
}

int main()
{
    string str = "racecar";
    bool output = func(str,0,str.size()-1);

    if(output==0)
        cout<<"False";
    else
        cout<<"True";
    return 0;
}