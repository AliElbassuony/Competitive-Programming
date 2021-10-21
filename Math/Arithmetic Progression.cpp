#include <bits/stdc++.h>

using namespace std;

int CalcSum(int first, int last, int length) {
    // sum = ((first + last)*length) / 2
    int sum = ((first + last) * length) >> 1;
    return sum;
}

// We can find any element given other three
int CalcLastElement(int first, int length, int difference) {
    // Last = first + (length - 1)*difference
    int last = first + (length - 1) * difference;
    return last;
}

int CalcDifference(int first, int last, int length) {
    // difference = (last - first) / (length - 1)
    int difference = (last - first) / (length - 1);
    return difference;
}

int CalcFirstElement(int last, int length, int difference) {
    // first = last - ((length - 1)*difference)
    int first = last - ((length - 1) * difference);
    return first;
}

int CalcSumWithoutLast(int first, int length, int difference) {
    // sum = ((2*first + (length - 1)*difference)*length) / 2
    int sum = ((2 * first + (length - 1) * difference) * length) >> 1;
    return sum;
}

int main() {
    /*
     *  1^2 + 2^2 + 3^2 + ... + n^2 = n(n + 1)(2n + 1) / 6
     */
}