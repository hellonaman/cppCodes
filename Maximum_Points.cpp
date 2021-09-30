#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool order(pair<int, int> a, pair<int, int> b)
{
    return (a.second / a.first) > (b.second / b.first);
}

void solve()
{
    int a, b, c, x, y, z;
    cin >> a >> b >> c >> x >> y >> z;
    vector<pair<int, int>> vp;
    vp.push_back({a, x});
    vp.push_back({b, y});
    vp.push_back({c, z});
    sort(vp.begin(), vp.end(), order);
    int t = 240;
    int ans = 0;
    for (auto p : vp)
    {
        int q = t / p.first;
        if (q > 20)
            q = 20;
        t -= (q * p.first);
        ans += (q * p.second);
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