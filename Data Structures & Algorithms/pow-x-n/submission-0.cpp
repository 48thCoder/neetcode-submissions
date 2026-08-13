class Solution {
   public:
    double myPow(double x, int n) {
        double ans = 1;
        if (n < 0) {
            x = 1 / x;
        }
        n = abs(n);
        for (int i = 1; i <= n; i++) {
            ans *= x;
        }
        return ans;
    }
};