#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] == arr[i])
        {
            cout << arr[i] << endl;
            break;
        }
    }
}

int main()
{
    vector<int> arr = {3, 1, 3, 4, 2};
    cout << "The duplicate element is : ";
    fun(arr);
}