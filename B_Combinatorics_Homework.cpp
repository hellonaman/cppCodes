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
    int a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    int m;
    cin >> m;
    sort(a, a + 3);
    int minr = a[2] - a[1] - 1;
    int maxr = 0;
    minr -= a[0];
    for (int i = 0; i < 3; i++)
        maxr += (a[i] - 1);
    if (m >= minr and m <= maxr)
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