class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majElem = 0, count = 0;

        for (int i = 0; i < n; i++) {
            if (count == 0) {
                majElem = nums[i];
            }

            if (nums[i] == majElem) {
                count++;
            } else {
                count--;
            }
        }
        return majElem;
    }
};