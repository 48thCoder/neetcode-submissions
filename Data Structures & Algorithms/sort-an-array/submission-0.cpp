class Solution {
   public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }

    void mergeSort(vector<int>& nums, int l, int r) {
        if (l >= r) {
            return;
        }
        int mid = (l + r) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        merge(nums, l, mid, r);
    }

    void merge(vector<int>& nums, int l, int mid, int r) {
        vector<int> result;
        int left = l;
        int right = mid + 1;

        while (left <= mid && right <= r) {
            if (nums[left] <= nums[right]) {
                result.push_back(nums[left]);
                left++;
            } else {
                result.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            result.push_back(nums[left]);
            left++;
        }

        while (right <= r) {
            result.push_back(nums[right]);
            right++;
        }

        for (int i = l; i <= r; i++) {
            nums[i] = result[i - l];
        }
    }
};