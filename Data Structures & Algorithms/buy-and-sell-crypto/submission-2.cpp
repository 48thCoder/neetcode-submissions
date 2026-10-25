class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int l = 0, r = 1, maxVal = 0;
        
        while (r < n) {
            if (prices[l] < prices[r]) {
                int profit = prices[r] - prices[l];
                maxVal = max(profit, maxVal);
            } else {
                l = r;
            }
            r++;
        }
        return maxVal;
    }
};