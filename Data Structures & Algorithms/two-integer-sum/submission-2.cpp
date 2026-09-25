class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> ump;
        for (int i = 0; i < n; i++) {
            int a = nums[i];
            int rem = target - a;
            if (ump.find(rem) != ump.end()) {
                return {ump[rem], i};
            }
            ump[a] = i;
        }
        return {-1, -1};
    }
};