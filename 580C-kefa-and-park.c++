#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin>>n;
    map<ll , ll> mp;
    vector<ll> A(n + 1);
    for(ll i = 1 ; i <= n ; i++) 
        cin>>A[i];
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++) {
        ll ele = A[i];
        ll cnt = 1;
        while(ele != -1) {
            ele = A[ele];
            cnt++;
        }
        ans = max(ans , cnt); 
    }
    cout<<ans<<endl;
}

int main() {
     ll t = 1;
    //  cin>>t;
    while(t--) solve();
    // return 0;
}
