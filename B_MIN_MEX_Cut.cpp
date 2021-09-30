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
    string s;
    cin >> s;
    bool all1 = true;
    for (char c : s)
    {
        if (c != '1')
            all1 = false;
    }
    if (all1)
    {
        cout << 0 << endl;
        return;
    }
    int flag = -1;
    for (char c : s)
    {
        if (c != '0' and flag == 1)
            flag = 0;
        if (c == '0' and flag == -1)
            flag = 1;
        if (c == '0' and flag == 0)
        {
            cout << 2 << endl;
            return;
        }
    }
    cout << 1 << endl;
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