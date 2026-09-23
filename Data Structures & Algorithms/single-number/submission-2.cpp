class Solution {
   public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        for (auto& [x, count] : freq) {
            if (count == 1) {
                return x;
            }
        }
        return -1;
    }
};