#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e5 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-5;
vector<char> v ={'a','b'};
int k = 3;
void sum(string s){
     if(s.size() == k){
        cout << s << el;
        return;
     }

    for(auto i : v){
        sum(s + i);
    }
}
void solve() {

    sum("");
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
