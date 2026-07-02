class Solution {
   public:
    bool isPalindrome(string s) {
        string copy = "";
        for (char c : s) {
            if (isalnum(c)) {
                copy += tolower(c);
            }
        }
        int n = copy.size();
        for (int i = 0; i < n; i++) {
            if (copy[i] != copy[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};