#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e6 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-2;

const int M = 105;
int coins[M],memo[N];
int n;
int dp(int x){
    // basecase
    if(x == 0)
        return 0;
    // check
    int &ret = memo[x];
    if(~ret)
        return ret;

    ret = 1e9;
    //transation
    for (int i = 0; i < n; ++i) {
        if(coins[i] <= x)
            ret = min(ret,1 + dp(x - coins[i]));
    }
    return ret;
}
void solve() {
    int x;
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
        cin >> coins[i];
    memset(memo,-1, sizeof(memo));
    cout << (dp(x) >= 1e9 ? -1 :dp(x));
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--)
        solve();

}