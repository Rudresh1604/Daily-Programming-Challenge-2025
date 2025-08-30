#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long fun(long long n, long long m)
{
    if (m > n)
        swap(n, m);
    long long prod = 1LL * n * m;
    long long greatest = gcd(n, m);
    long long ans = prod / greatest;
    return ans;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        cout << fun(a, b) << endl;
    }
}
