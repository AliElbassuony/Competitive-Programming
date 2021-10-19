#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e6 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-2;

const int M = 101;
int coins[M], memo[N];
int n;

int dp(int x) {
    // basecase
    if (x == 0)
        return 1;
    // check if visited
    int &ret = memo[x];
    if (~ret)
        return ret;
    ret = 0;
    // transition
    for (int i = 0; i < n; ++i) {
        if(coins[i] <=  x)
            ret = ((ret % MOD) + (dp(x - coins[i]) % MOD)) % MOD;
    }
    return ret;

}

void solve() {
    int x;
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
        cin >> coins[i];
    memset(memo, -1, sizeof(memo));
    cout << dp(x);
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--)
        solve();

}