class Solution
{
public:
    void solve(int index, int sum, vector<int> &arr, int N, vector<int> &sumsubset)
    {
        // base case
        if(index==N)
        {
            sumsubset.push_back(sum);
            return;
        }
        
        // pick
        solve(index+1,sum+arr[index],arr,N,sumsubset);
        // not pick
        solve(index+1,sum,arr,N,sumsubset);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> sumsubset;
        solve(0,0,arr,N,sumsubset);
        sort(sumsubset.begin(),sumsubset.end());
        
        return sumsubset;
    }
};
