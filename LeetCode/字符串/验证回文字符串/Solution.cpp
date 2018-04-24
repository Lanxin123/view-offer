class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1 ;
        while (left < right) {
            if (!isalnum(s[left])) ++left;
            else if (!isalnum(s[right])) --right;
            else if ((s[left] + 27 - 'a') %27 != (s[right] + 27 - 'a') % 27) return false;
            else {
                ++left; --right;
            }
        }
        return true;
    }
};