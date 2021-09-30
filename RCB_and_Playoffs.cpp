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
    int x, y, z;
    cin >> x >> y >> z;
    if (x + 2 * z >= y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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