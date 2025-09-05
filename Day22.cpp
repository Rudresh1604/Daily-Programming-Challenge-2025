#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> &arr, int k)
{
    int n = arr.size();
    if (n < k)
        return -1;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
        mpp[arr[i]]++;

    int ans = -1;
    for (auto it : mpp)
    {
        int key = it.first;
        int val = it.second;
        if (val == k)
        {
            ans = key;
            break;
        }
    }
    return ans;
}

int main()
{

    int k = 2;
    // vector<int> arr = {2, 3, 4, 2, 2, 5, 5};
    // vector<int> arr = {1, 1, 1, 1};
    // vector<int> arr = {6, 6, 6, 6, 7, 7, 8, 8, 8};
    vector<int> arr = {3, 1, 4, 4, 5, 2, 6, 1, 4};
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    cout << fun(arr, k) << endl;
}