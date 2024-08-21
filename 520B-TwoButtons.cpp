// Jai Shree Ram

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(i, a, b) for (ll i = a; i < b; i++)
#define rloop(i, a, b) for (ll i = a; i >= b; i--)

void solve()
{
    ll N;
    cin >> N;

    ll M;
    cin >> M;

    ll c = 0;

    if (M <= N)
    {
        cout << N - M << endl;
        return;
    }
    else
    {
        while (M != N)
        {
            if (M % 2 == 1 || M < N)
            {
                M++;
            }
            else
            {
                M /= 2;
            }
            c++;
        }
    }
    cout << c << endl;
}

int main()
{
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
