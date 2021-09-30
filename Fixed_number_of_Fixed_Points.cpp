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
    int n, k;
    cin >> n >> k;
    if ((n - k) == 1)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= k; i++)
        cout << i << " ";
    int count = (n - k) / 2;
    while (count--)
    {
        cout << n-- << " ";
    }
    k++;
    while (k <= n)
    {
        cout << k++ << " ";
    }
    cout << endl;
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