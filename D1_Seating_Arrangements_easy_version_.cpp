#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define PI 3.141592653589793238
#define MOD 1000000007
#define f(i, a, b) for (int i = a; i <= b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define FastIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> vp;
    int t;
    for (int i = 0; i < m; i++)
    {
        cin >> t;
        vp.push_back({t, i + 1});
    }
    sort(vp.begin(), vp.end(), compare);
    vector<bool> filled(vp.size() + 1, false);
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        cout << i + 1 << "-" << vp[i].second << ",";
        for (int j = 0; j < vp[i].second; j++)
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