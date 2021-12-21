#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define all(v) v.begin(), v.end()

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e5 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-5;

bool vis[N];

void dfs(int node, vector<vector<int>> &graph) {
    vis[node] = 1;
    cout << node << endl;
    for (auto child : graph[node]) {
        if (!vis[child])
            dfs(child, graph);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    int u = 0, v = 0;
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, adj);
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//    freopen("in.txt", "r", stdin);
    int t = 1, it = 1;
//    cin >> t;
    while (t--) {
//        cout << "Case #" << it++ << ": ";
        solve();
    }
}