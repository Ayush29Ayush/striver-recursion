#include<bits/stdc++.h>
using namespace std;

// void rev(int arr[], int start, int end)
// {
//     // base case
//     if(start>end)
//         return;

//     swap(arr[start],arr[end]);
//     rev(arr, start+1, end-1);
// }

void rev(int arr[], int start, int size)
{
    // base case
    if(start>size/2)
        return;

    swap(arr[start],arr[size-start]);
    rev(arr, start+1, size);
}

int main()
{
    int arr[] = {1,2,3,4};
    rev(arr,0,3);
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}