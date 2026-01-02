// https://codeforces.com/contest/2178/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s; cin>>s;
    int cnt = 0;
    for (char c : s)
    {
        if (c == 'Y') cnt++;
    }

    if (cnt <= 1) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
