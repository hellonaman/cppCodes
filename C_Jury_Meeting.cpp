#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

unsigned int factorial(unsigned int n)
{
    int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void solve()
{
    int n;
    cin >> n;
    int a[n], mx = INT_MIN;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    if (mp.size() == 1)
    {
        cout << factorial(mp.rbegin()->second) << endl;
        return;
    }
    auto it = mp.end();
    int last = it->first;
    it--;
    int slast = it->first;
    if (last = slast - 1)
        mp[last] += mp[slast];
    int ans = 0;
    if (mp[last] > 1)
    {
        n -= 2;
        for (int i = 0; i <= n; i++)
        {
            int x1 = i;
            for (int j = 0; j <= n - i; j++)
            {
                int x2 = j;
                int x3 = n - i - j;
                // cout << x1 << " " << x2 << " " << x3 << endl;
                ans += (nCr(n, x1) * factorial(x1) + nCr(n, x2) * factorial(x2) * nCr(n, x3) + factorial(x3));
            }
        }
    }
    cout << ans << endl;
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