#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 100 + 19, W = 1e5 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-2;
int n, w;


int value[N], weight[W];
ll memo[N][W];

ll dp(int index, int cap) {
// base case
    if(index == n || cap == 0)
        return 0;
// check if calculated before
    if(memo[index][cap] != -1)
        return memo[index][cap];
//transition
// leave
    memo[index][cap] = dp(index + 1,cap);
// take
    if(weight[index] <= cap)
        memo[index][cap] = max(memo[index][cap],value[index] + dp(index + 1,cap - weight[index]));
    return memo[index][cap];
}

void solve() {
    cin >> n >> w;
    for (int i = 0; i < n; ++i)
        cin >> weight[i] >> value[i];
    memset(memo, -1, sizeof(memo));
    cout << dp(0,w)<<el;

}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--)
        solve();

}