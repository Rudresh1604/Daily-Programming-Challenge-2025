#include <bits/stdc++.h>
using namespace std;

bool fun(string s)
{
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
            continue;
        }
        if ((s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[') || (s[i] == ')' && st.top() == '('))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    return st.empty();
}

int main()
{
    string s = "[{()}]";
    cout << fun(s) << endl;
    ;
}