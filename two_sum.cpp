class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> num;
        int n= nums.size();
        for(int i= 0; i< n; i++){
            int rem= target- nums[i];
            if(num.find(rem)!= num.end()){
                return {num[rem], i};
            }
            num[nums[i]]= i;
        }
        return {};
    }
};