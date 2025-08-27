#include <bits/stdc++.h>
using namespace std;

bool solve(string &s, int l, int r, vector<vector<int>> &dp)
{

    if (l >= r)
        return 1;
    if (dp[l][r] != -1)
        return dp[l][r];
    if (s[l] == s[r])
    {
        return (dp[l][r] = solve(s, l + 1, r - 1, dp));
    }
    else
    {
        return 0;
    }
}

string fun(string s)
{
    long int n = s.size();

    string ans = "";

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    int maxlen = 0;
    int startind = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (solve(s, i, j, dp))
            {
                if (dp[i][j] && j - i + 1 > maxlen)
                {
                    maxlen = j - i + 1;
                    startind = i;
                }
            }
        }
    }
    ans = s.substr(startind, maxlen);
    return ans;
}

int main()
{
    string s = "baba";
    cout << fun(s) << endl;
}