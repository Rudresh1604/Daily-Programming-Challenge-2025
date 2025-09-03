#include <bits/stdc++.h>
using namespace std;

void help(stack<int> &st, int element)
{
    if (st.empty() || st.top() > element)
    {
        st.push(element);
        return;
    }
    int a = st.top();
    st.pop();
    help(st, element);
    st.push(a);
}
void fun(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int a = st.top();
    st.pop();
    fun(st);
    help(st, a);
}
int main()
{
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);
    fun(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}