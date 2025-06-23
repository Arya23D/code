class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int e = s.size() - 1;

        while (l <= e) {
            // Skip non-alphanumeric characters
            while (l < e && !isalnum(s[l])) l++;
            while (l < e && !isalnum(s[e])) e--;

            // Compare lowercase versions
            if (tolower(s[l]) != tolower(s[e])) {
                return false;
            }

            l++;
            e--;
        }

        return true;
    }
};