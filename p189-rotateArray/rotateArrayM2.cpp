#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    if (k>n) {
        rotate(nums, k%n);
        return;
    }
    if ((n == 1) || (k == 0) || (k == n))
    {
        return;
    }
    vector<int> arr, temp;
    for (int i = k; i >= 1; i--) {
        arr.insert(arr.begin(), nums.back());
        nums.pop_back();
    }
    for (int i = 1; i <= n-k; i++) {
        arr.push_back(nums.front());
        nums.erase(nums.begin());
    }
    temp = arr;
    arr = nums;
    nums = temp;

}