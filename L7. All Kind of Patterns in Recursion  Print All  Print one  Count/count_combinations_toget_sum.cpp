#include<bits/stdc++.h>
using namespace std;

//! This LEFT RIGHT technique will count of combinations
//! TC->O(2^n)

int printS(int index, int s, int sum, int arr[], int n)
{
    //! base case
    if(index==n)
    {
        // condition satified 
        if(s==sum) return 1;

        // condition not satisfied
        else return 0;
    }

    //! LEFT
    s += arr[index];

    int l = printS(index+1, s, sum, arr, n);

    //! RIGHT
    s -= arr[index];

    int r = printS(index+1, s, sum, arr, n);

    //! return LEFT + RIGHT
    return l+r;
    
}

int main()
{
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    int count = printS(0, 0, sum, arr, n);
    cout<<count;

    return 0;
}