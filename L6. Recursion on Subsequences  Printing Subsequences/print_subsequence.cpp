#include<bits/stdc++.h>
using namespace std;

void printsubsequence(int index, vector<int> &ds, int arr[], int n)
{
    //! base case
    if(index == n)
    {
        for(auto i : ds)
        {
            cout<<i<<" ";
        }
        if(ds.size()==0) 
            cout<<"{}";

        cout<<endl;
        return;
    }

    //! take or pick the particular index into the subsequence
    ds.push_back(arr[index]);
    printsubsequence(index+1, ds, arr, n);

    //! not take or not pick condition, when the element is not added to the subsequence
    ds.pop_back();
    printsubsequence(index+1, ds, arr, n);
}

//! TC->O(n * 2^n)
//! SC->O(n)
int main()
{
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;

    printsubsequence(0, ds, arr, n);
    return 0;
}