#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> &a, vector<int> &b)
{
    int n = a.size(), m = b.size();
    vector<int> temp(n + m);
    int i = 0, j = 0, cur = 0;
    while (i >= 0 && i < n && j >= 0 && j < m)
    {
        if (a[i] < b[j])
        {
            temp[cur] = a[i];
            cur++;
            i++;
        }
        else
        {
            temp[cur] = b[j];
            cur++;
            j++;
        }
    }
    while (i >= 0 && i < n)
    {
        temp[cur] = a[i];
        cur++;
        i++;
    }
    while (j >= 0 && j < m)
    {
        temp[cur] = b[j];
        j++;
        cur++;
        ;
    }
    for (auto it : temp)
    {
        cout << it << " " << endl;
    }
}

int main()
{
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};
    fun(a, b);
}