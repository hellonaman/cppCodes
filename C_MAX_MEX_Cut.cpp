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
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1 and ((s1[i] == '0' and s2[i] == '0' and s1[i + 1] == '1' and s2[i + 1] == '1') or (s1[i] == '1' and s2[i] == '1' and s1[i + 1] == '0' and s2[i + 1] == '0')))
        {
            ans += 2;
            i++;
        }
        else if ((s1[i] == '1' and s2[i] == '0') or (s1[i] == '0' and s2[i] == '1'))
            ans += 2;
        else if (s1[i] == '0' and s2[i] == '0')
            ans += 1;
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