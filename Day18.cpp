#include <bits/stdc++.h>
using namespace std;

long long fun(long long n)
{
    long long cnt = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                cnt += 1;
            else
                cnt += 2;
        }
    }
    return cnt;
}

int main()
{
    long long n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}
