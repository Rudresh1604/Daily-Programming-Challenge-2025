#include <bits/stdc++.h>
using namespace std;

vector<long> eucl(long n)
{
    vector<bool> prime(n + 1, 1);
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 0;
            }
        }
    }
    vector<long> ans;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            ans.push_back(i);
        }
    }
    return ans;
}

vector<long> fun(long num)
{
    vector<long> prime = eucl(num);
    vector<long> ans;
    for (int i = 0; i < prime.size(); i++)
    {
        while (num % prime[i] == 0)
        {
            ans.push_back(prime[i]);
            num = num / prime[i];
        }
    }
    if (num > 1)
    {
        ans.push_back(num);
    }
    return ans;
}

int main()
{
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<long> ans = fun(n);
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}
