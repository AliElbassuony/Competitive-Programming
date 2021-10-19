#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e6 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-2;
int dice[6]= {1, 2, 3, 4, 5, 6};
int memo[N];
int dp(int x) {
    // basecase
    if (x == 0)
        return 1;
    // check
    int &ret = memo[x];
    if (~ret)
        return ret;

    ret = 0;
    //transation
    for (int i = 0; i < 6; ++i) {
        if (dice[i] <= x)
            ret = ((ret % MOD) + (dp(x - dice[i])  % MOD)) % MOD;
    }
    return ret;
}

void solve() {
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo));
    cout << dp(n);
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--)
        solve();

}