#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

typedef long long ll;

const int N = 1e5 + 19, OO = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-5;

void CalcSum(int first, int last, int length) {
    // sum = ((first + last)*length) / 2
    int sum = ((first + last) * length) >> 1;
    cout << sum << endl;
}

// We can find any element given other three
void CalcLastElement(int first, int length, int difference) {
    // Last = first + (length - 1)*difference
    int last = first + (length - 1) * difference;
    cout << last << endl;
}

void CalcDifference(int first, int last, int length) {
    // difference = (last - first) / (length - 1)
    int difference = (last - first) / (length - 1);
    cout << difference << endl;
}

void CalcFirstElement(int last, int length, int difference) {
    // first = last - ((length - 1)*difference)
    int first = last - ((length - 1) * difference);
    cout << first << endl;
}

void CalcSumWithoutLast(int first, int length, int difference) {
    // sum = ((2*first + (length - 1)*difference)*length) / 2
    int sum = ((2 * first + (length - 1) * difference) * length) >> 1;
    cout << sum << endl;
}

void solve() {
    // 2 5 8 11 = 26
    vector<int> v = {2, 5, 8, 11};
    int size = v.size();

    cout << "Vector Elements: ";
    for(auto i : v)
        cout << i<<" ";
    cout << endl;

    // first, last, length
    cout << "Sum of Elements = ";
    CalcSum(*v.begin(), v.back(), size);

    // first, length, difference
    int difference = v[1] - v[0];
    cout << "Last Element = ";
    CalcLastElement(*v.begin(), size, difference);

    // first, length, difference
    cout << "Sum without Last Element = ";
    CalcSumWithoutLast(*v.begin(), size, difference);

    // first, last, length
    cout << "Difference = ";
    CalcDifference(*v.begin(), v.back(), size);

    // last, length, difference
    cout << "First Element = ";
    CalcFirstElement(v.back(), size, difference);
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--)
        solve();

}