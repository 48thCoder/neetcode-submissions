class Solution {
   public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, maxSum = nums[0];

        for (int x : nums) {
            if (sum < 0) {
                sum = 0;
            }
            sum += x;
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};