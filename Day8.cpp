#include <bits/stdc++.h>
using namespace std;

string fun(string s)
{
    string result;
    int i = 0;
    int n = s.length();
    while (i < n)
    {
        while (i < n && s[i] == ' ')
            i++;
        if (i == n)
            break;
        int j = i + 1;
        while (j < n && s[j] != ' ')
            j++;
        string sub = s.substr(i, j - i);
        if (result.length() == 0)
            result = sub;
        else
            result = sub + ' ' + result;
        i = j + 1;
    }
    return result;
}

int main()
{
    // string Input = "the sky is blue";
    // string Input = "  hello world  ";
    // string Input = "  hello   world  ";
    // string Input = "abc";
    // string Input = "";
    string Input = " ";
    cout << fun(Input);
    return 0;
}