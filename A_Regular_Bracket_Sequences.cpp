#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int full = 1; full <= n; full++)
    {
        char ans[2 * n];
        int open = n - full;
        int close = n - full;
        int tfull = full;
        for (int i = 0; i < 2 * n; i++)
        {
            if (open > 0)
            {
                ans[i] = '(';
                open--;
            }
            else if (tfull > 0)
            {
                ans[i] = '(';
                ans[i + 1] = ')';
                i++;
                tfull--;
            }
            else if (close > 0)
            {
                ans[i] = ')';
                close--;
            }
        }
        for (int i = 0; i < 2 * n; i++)
            cout << ans[i];
        cout << endl;
    }
}

signed main()
{
    FastIO;
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}