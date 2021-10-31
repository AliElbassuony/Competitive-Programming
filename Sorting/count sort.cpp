#include <bits/stdc++.h>

using namespace std;

vector<int> count_sort(vector<int> &nums) {
    int maximum = *max_element(nums.begin(),nums.end());
    vector<int> count(maximum + 1),sorted;
    for (auto i : nums) {
        count[i]++;
    }

    for(int i = 0;i <= maximum;++i){
        if(count[i])
            sorted.push_back(i);
    }

    return sorted;
}

int main() {

}