class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int e = s.size() - 1;

        while (l <= e) {
            if (!isalnum(s[l])) {
                l++;
            } else if (!isalnum(s[e])) {
                e--;
            } else {
                char t1 = tolower(s[l]);
                char t2 = tolower(s[e]);
                if (t1 != t2) return false;
                l++;
                e--;
            }
        }
        return true;
    }
};