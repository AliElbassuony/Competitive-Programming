#include <bits/stdc++.h>

using namespace std;

vector<int> bubble_sort(vector<int> &nums) {
    int length = nums.size();
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length - 1; ++j) {
            if(nums[j] > nums[j + 1])
                swap(nums[j],nums[j + 1]);
        }
    }
    return nums;
}

int main() {

}