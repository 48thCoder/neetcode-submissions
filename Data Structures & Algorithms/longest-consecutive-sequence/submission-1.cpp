class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int lastSmall = INT_MIN, count = 0, longest = 1;
        sort(nums.begin(), nums.end());

        if (n == 0) {
            return 0;
        }

        for (int num : nums) {
            if (num - 1 == lastSmall) {
                count++;
                lastSmall = num;
            } else if (lastSmall != num) {
                count = 1;
                lastSmall = num;
            }
            longest = max(longest, count);
        }
        return longest;
    }
};