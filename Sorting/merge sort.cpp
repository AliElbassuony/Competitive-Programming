#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums, int left, int mid, int right) {

    int n1 = mid - left + 1; // size of first array
    int n2 = right - mid; // size of second array

    vector<int> arr1(n1), arr2(n2);

    for (int i = 0; i < n1; ++i)
        arr1[i] = nums[left + i];

    for (int j = 0; j < n2; ++j)
        arr2[j] = nums[mid + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            nums[k] = arr1[i];
            i++;
        } else {
            nums[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        nums[k] = arr1[i];
        i++, k++;
    }

    while (j < n2) {
        nums[k] = arr2[j];
        j++, k++;
    }

}

void merge_sort(vector<int> &nums, int left, int right) {
    if (left < right) {
        int mid = left + ((right - left) >> 1);

        merge_sort(nums, left, mid);
        merge_sort(nums, mid + 1, right);

        merge(nums, left, mid, right);
    }
}


int main() {

}