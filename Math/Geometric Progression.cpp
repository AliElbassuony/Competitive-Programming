#include <bits/stdc++.h>

using namespace std;

int calcLastElement(int first, int ratio, int length) {
    int last = first * pow(ratio, length - 1);
    return last;
}

int sumWithFirst(int first, int ratio, int length) {
    int sum = (first * (1 - pow(ratio, length))) / double(1 - ratio);
    return sum;
}

int sum(int first, int last, int ratio) {
    int sum = (last * ratio - first) / double(ratio - 1);
    return sum;
}
int main(){
        /*
         * A special case of a sum of a geometric progression is the formula
         * 1 + 2 + 4 + 8 + ... + 2^(n−1) = 2^n − 1
         */
}