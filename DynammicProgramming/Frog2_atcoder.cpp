#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e5 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-2;

int heights[N], memo[N];
int n,k;

int dp(int index) {
    // base case
    if (index == n - 1)
        return 0;
    // check if calculated
    if (memo[index] != -1)
        return memo[index];
    // transition


    // take first
    if (index + 1 < n)
        memo[index] = abs(heights[index] - heights[index + 1]) + dp(index + 1);
    // take All
    for (int i = 2; i <= k; ++i) {
        if(index + i < n)
            memo[index] = min(memo[index],  abs(heights[index] - heights[index + i]) + dp(index + i));
        else
            break;
    }
    return memo[index];
}

void solve() {
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }
    memset(memo, -1, sizeof(memo));
    cout << dp(0) << el;

}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--)
        solve();

}