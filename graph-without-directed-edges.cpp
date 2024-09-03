// jai shree ram
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans = 0;
void dfs(ll node, vector<vector<ll>> &adj, vector<ll> &vis , ll parent , bool &flag)
{
    vis[node] = 1;
    if(adj[node].size() != 2) {
        flag = false;
    }
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis , node , flag);
        }
        else
        {
            if(parent != it && flag)
            {
                cout<<parent<<" "<<it<<" "<<endl;
                ans++;  
                flag = 0;
                return;
            }   
        }
    }
}   
bool checkCyle(ll node , vector<vector<ll>> &adj, vector<ll> & vis , ll parent , ll count) 
{
    vis[node] = 1;
    for(auto it : adj[node])
    {
        if(!vis[it])
        { 
            if(checkCyle(it , adj , vis , node , count + 1))
            {
                return true;
            }
        }
        else
        {
            if(parent != it && count % 2)
            {
                return true;
            }
        }
    }
    return false;
}
void solve()
{
    ll n;
    cin >> n;

    ll m;
    cin >> m;
    vector<vector<ll>> adj(n + 1);

    for (ll i = 1; i <= m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // first find wheather there is a neg cycle
    // find cycle with odd number of nodes;
    vector<ll> vis(n + 1, 0);
    if(!checkCyle(1 , adj , vis , -1 , 0))
    {
        cout<<"NO\n";
        return;
    }
    // do dfs and direct edges oppoiste to each other
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
