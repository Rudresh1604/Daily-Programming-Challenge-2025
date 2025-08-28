#include <bits/stdc++.h>
using namespace std;

int solve(string &s, int k)
{
    int n = s.size();
    int l = 0, r = 0;
    int cnt = 0;
    unordered_map<char, int> mp;

    while (r < n)
    {
        mp[s[r]]++;

        while (mp.size() > k)
        {
            mp[s[l]]--;
            if (mp[s[l]] == 0)
            {
                mp.erase(s[l]);
            }
            l++;
        }

        cnt += (r - l + 1);
        r++;
    }

    return cnt;
}

int fun(string s, int k)
{
    int n = s.size();
    if (k < 0)
        return 0;
    if (k > n)
        return 0;

    int a = solve(s, k);
    int b = solve(s, k - 1);

    return a - b;
}

int main()
{
    string s = "pqpqs";
    int k = 2;
    cout << fun(s, k) << endl;
    return 0;
}
