#include<bits/stdc++.h>
using namespace std;

//! This technique will just give one answer i.e the first combination it will get

bool printS(int index, vector<int> &ds, int s, int sum, int arr[], int n)
{
    //! base case
    if(index==n)
    {
        // condition satified 
        if(s==sum)
        {
            for(auto i : ds)
                cout<<i<<" ";
            cout<<endl;
            return true;
        }
        // condition not satisfied
        else
            return false;
    }
    //! TAKE
    ds.push_back(arr[index]);
    s += arr[index];
    if(printS(index+1, ds, s, sum, arr, n) == true)
        return true;

    //! NOT TAKE
    ds.pop_back();
    s -= arr[index];
    if(printS(index+1, ds, s, sum, arr, n) == true)
        return true;

    //! if nothing returned true then return false
    return false;
    
}

int main()
{
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printS(0, ds, 0, sum, arr, n);
    return 0;
}