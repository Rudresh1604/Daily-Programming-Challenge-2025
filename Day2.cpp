#include <bits/stdc++.h>
using namespace std;

long fun(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] + 1 != arr[i])
        {
            cout << arr[i - 1] + 1 << endl;
            break;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    fun(arr);
}