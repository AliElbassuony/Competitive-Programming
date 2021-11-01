#include <bits/stdc++.h>

using namespace std;

vector<int> insertion_sort(vector<int> &nums) {
    int length = nums.size();
    
    for (int i = 1; i < length; ++i) {
        int key = nums[i];
        int j = i - 1;

        while (j >= 0 && key < nums[j]) {
            nums[j + 1] = nums[j];
            --j;
        }

        nums[j + 1] = key;
    }

    return nums;
}

int main() {

}