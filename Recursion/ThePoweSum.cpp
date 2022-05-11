#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e5 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-5;
int c = 0;
void power_sum(int n,int x,int sum,int prev){
     if(n == sum){
            c++;
        return;
     } else if(sum > n)
        return;


        prev++;
        if(pow(prev,x) > n)
            return;
        power_sum(n,x,sum + pow(prev,x),prev);
        power_sum(n,x,sum,prev);

}
void solve() {
    int n,x;
    cin >> n >> x;

    power_sum(n,x,0,0);
    cout << c << el;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   // freopen("in.txt", "r", stdin);
   // freopen("out.txt","w",stdout);
    int t = 1, it = 1;
   // cin >> t;
    while (t--) {
        //cout << "Case #" << it++ << ": ";
        solve();
    }
}
