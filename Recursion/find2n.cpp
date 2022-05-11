#include <bits/stdc++.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e5 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-5;
int n = 2;
void sum(string s,int s1,int s2){
    if(s.size() == n*2){
        if(s1 == s2)
            cout << s << el;
        return;
    }

    sum(s + '0' , s1,s2);
    if(s.size() < n)
        sum(s + '1', s1 + 1, s2);
    else
        sum(s + '1', s1, s2 + 1);
}
void solve() {

    sum("",0,0);
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
