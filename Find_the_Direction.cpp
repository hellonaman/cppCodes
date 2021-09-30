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
    if (n % 4 == 0)
    {
        cout << "North" << endl;
        return;
    }
    if ((n - 1) % 4 == 0)
    {
        cout << "East" << endl;
        return;
    }
    if ((n - 2) % 4 == 0)
    {
        cout << "South" << endl;
        return;
    }
    if ((n - 3) % 4 == 0)
    {
        cout << "West" << endl;
        return;
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