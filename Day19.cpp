#include <bits/stdc++.h>
using namespace std;

int postFixEvaluation(vector<string> &s)
{
    stack<int> st;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == "+" || s[i] == "-" || s[i] == "*" || s[i] == "/" || s[i] == "^")
        {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            char ch = s[i][0];
            switch (ch)
            {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            default:
                return -1;
                break;
            }
        }
        else
        {
            st.push(stoi(s[i]));
        }
    }
    return st.top();
}

int main()
{
    // vector<string> s = {"3", "4", "2", "*", "1", "5", "-", "2", "3", "^", "^", "/", "+"};
    vector<string> s = {"15", "7", "1", "1", "+", "-", "/", "3", "*", "2", "1", "1", "+", "+", "-"};
    cout << postFixEvaluation(s);
    return 0;
}