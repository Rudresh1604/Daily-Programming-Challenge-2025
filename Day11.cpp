#include <bits/stdc++.h>
using namespace std;

void nextPerm(string &s)
{
    int n = s.size();
    int idx = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] < s[i + 1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        reverse(s.begin(), s.end());
        return;
    }

    for (int i = n - 1; i > idx; i--)
    {
        if (s[i] > s[idx])
        {
            swap(s[i], s[idx]);
            break;
        }
    }

    reverse(s.begin() + idx + 1, s.end());
}

vector<string> allPermutations(string s)
{
    vector<string> result;
    set<string> seen;

    seen.insert(s);
    result.push_back(s);

    long long total = 1;
    for (int i = 1; i <= s.size(); i++)
    {
        total *= i;
    }

    for (int i = 0; i < total - 1; i++)
    {
        nextPerm(s);
        if (seen.find(s) == seen.end())
        {
            seen.insert(s);
            result.push_back(s);
        }
    }

    return result;
}

int main()
{
    string s = "aaaaa";
    vector<string> perms = allPermutations(s);

    for (const string &p : perms)
    {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}