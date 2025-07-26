#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> num;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int rem = target - nums[i];
            if (num.find(rem) != num.end()) {
                return {num[rem], i};
            }
            num[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }

    return 0;
}