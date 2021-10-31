#include <bits/stdc++.h>

using namespace std;

vector<int> selection_sort(vector<int> &nums) {
    int length = nums.size();

    for (int i = 0; i < length - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < length; ++j) {
            if (nums[min_index] > nums[j])
                min_index = j;
        }
        swap(nums[min_index], nums[i]);
    }

    return nums;
}

int main() {

}