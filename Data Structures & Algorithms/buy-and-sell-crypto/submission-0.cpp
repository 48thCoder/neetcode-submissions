class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;

        for (int i = 0; i < n; i++) {
            int profit = 0;
            for (int j = i + 1; j < n; j++) {
                if (prices[j] > prices[i]) {
                    profit = prices[j] - prices[i];
                    maxProfit = max(maxProfit, profit);
                }
            }
        }
        return maxProfit;
    }
};