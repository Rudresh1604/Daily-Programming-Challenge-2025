#include <bits/stdc++.h>
using namespace std;

void helper(int item, stack<int> &st)
{
    if (st.empty())
    {
        st.push(item);
        return;
    }
    int temp = st.top();
    st.pop();
    helper(item, st);
    st.push(temp);
}
void fun(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int item = st.top();
    st.pop();
    fun(st);
    helper(item, st);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    fun(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}