#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> &arr)
{
    int n = arr.size();
    int l = 0, m = 1, h = n - 1;
    while (m <= h)
    {
        if (arr[m] == 1)
            m++;
        else if (arr[m] == 0)
        {
            swap(arr[m], arr[l]);
            l++;
            m++;
        }
        else if (arr[m] == 2)
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    fun(arr);

    cout << "After sorting we get : " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}