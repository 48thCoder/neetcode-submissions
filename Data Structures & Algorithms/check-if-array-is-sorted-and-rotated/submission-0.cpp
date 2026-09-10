class Solution {
   public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int result[n];
        int x = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                x = i;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            result[i] = nums[(i + x) % n];
        }
        for (int i = 1; i < n; i++) {
            if (result[i] >= result[i - 1]) {
            } else {
                return false;
            }
        }
        return true;
    }
};