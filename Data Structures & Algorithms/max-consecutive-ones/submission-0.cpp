class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] != 1) {
                    i = j;
                    break;
                }
                count += 1;
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};