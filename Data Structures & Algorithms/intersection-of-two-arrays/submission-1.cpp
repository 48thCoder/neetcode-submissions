class Solution {
   public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> result;

        for (int x : nums1) {
            freq[x] = 1;
        }

        for (int x : nums2) {
            if (freq[x] == 1) {
                freq[x] = 0;
                result.push_back(x);
            }
        }

        return result;
    }
};