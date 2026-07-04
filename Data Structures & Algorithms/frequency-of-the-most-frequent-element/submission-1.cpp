class Solution {
   public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;

        for (int i = 0; i < n; i++) {
            int j = i - 1;
            long long cost = k;

            while (j >= 0 && (cost - (nums[i] - nums[j])) >= 0) {
                cost -= (nums[i] - nums[j]);
                j--;
            }
            count = max(count, i - j);
        }
        return count;
    }
};