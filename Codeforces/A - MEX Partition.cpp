// https://codeforces.com/contest/2160/problem/A
#include <bits/stdc++.h>
using namespace std;

void run()
{
    int sz; cin >>sz;
    vector<int>v(105,0);
    for (int i = 0; i < sz; i++)
    {
        int val; cin>>val;
        v[val]++;
    }

    int res = 0;
    while (v[res])
    {
        res++;
    }
    cout <<res<<"\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1; cin >> tc;
    while (tc--)
    {
        run();
    }
    return 0;
}
