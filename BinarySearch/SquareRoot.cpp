#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <complex>
#include <string>
#include <bitset>
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iomanip>
#include <numeric>
#include <assert.h>
#include <stdio.h>

using namespace std;
#define el '\n'
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e5 + 1, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-2;

double squareRoot(int number, int precision) {
    int start = 0, end = number;
    double ans = 0;
    while (start <= end) {
        int mid = (start + end) /  2;
        if (number == mid * mid) {
            ans = mid;
            break;
        } else if (mid * mid > number) {
            end = mid - 1;
        } else {
            start = mid + 1;
            ans = mid;
        }
    }


    // For Computing fractional part
    // upto for given precision number

    double inc =0.1;
    for (int i = 0; i < precision; ++i) {
        while (ans * ans <= number)
            ans += inc;
        ans -= inc;
        inc /= 10;
    }
    return ans;
}

void solve() {
    int n, num;
    cin >> n >> num;
    //  For Testing Code
    //  cout << sqrt(n)<<el;
    cout << squareRoot(n, num) << el;
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--)
        solve();

}
