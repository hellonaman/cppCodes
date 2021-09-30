#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int gbl;
bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        // int ra = (a.second - 1) / gbl;
        // int rb = (b.second - 1) / gbl;
        // if (ra != rb)
        //     return ra < rb;
        return a.second > b.second;
    }
    return a.first < b.first;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    gbl = m;
    vector<pair<int, int>> vp;
    int t;
    for (int i = 0; i < m * n; i++)
    {
        cin >> t;
        vp.push_back({t, i + 1});
    }
    sort(vp.begin(), vp.end(), compare);
    vector<bool> filled(vp.size() + 1, false);
    int ans = 0;
    for (int i = 0; i < m * n; i++)
    {
        cout << vp[i].second << "-" << (m * ((vp[i].second - 1) / m)) + 1 << " , ";
        for (int j = (m * ((vp[i].second - 1) / m)) + 1; j < vp[i].second; j++)
        {
            if (filled[j])
                ans++;
        }
        filled[vp[i].second] = true;
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