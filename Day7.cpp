#include <bits/stdc++.h>
using namespace std;

int fun(vector<int> &arr)
{
    int l = 0, r = arr.size() - 1;
    int res = 0;
    int leftmax = 0, rightmax = 0;
    while (l < r)
    {
        if (arr[l] <= arr[r])
        {
            if (arr[l] >= leftmax)
            {
                leftmax = arr[l];
            }
            else
            {
                res += leftmax - arr[l];
            }
            l++;
        }
        else
        {
            if (arr[r] >= rightmax)
            {
                rightmax = arr[r];
            }
            else
            {
                res += rightmax - arr[r];
            }
            r--;
        }
    }
    return res;
}

int main()
{
    // vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    // vector<int> height = {4, 2, 0, 3, 2, 5};
    // vector<int> height = {1, 1, 1};
    // vector<int> height = {5};
    // vector<int> height = {2, 0, 2};
    // vector<int> height = {1, 2, 3, 4, 5, 6};
    vector<int> height = {6, 5, 4, 3, 2, 1};
    cout << fun(height);
    return 0;
}