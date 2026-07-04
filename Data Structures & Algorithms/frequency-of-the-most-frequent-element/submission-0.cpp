class Solution {
   public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                long long cost = 0;
                for (int x = i; x <= j; x++) {
                    cost += nums[j] - nums[x];
                }
                if (cost <= k) {
                    count = max(count, j - i + 1);
                }
            }
        }
        return count;
    }
};