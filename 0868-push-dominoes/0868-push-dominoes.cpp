class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        string s = "L" + dominoes + "R";
        int prev = 0;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == '.') continue;
            if (s[prev] == s[i]) {
                for (int k = prev + 1; k < i; ++k) s[k] = s[i];
            } else if (s[prev] == 'R' && s[i] == 'L') {
                int l = prev + 1, r = i - 1;
                while (l < r) {
                    s[l++] = 'R';
                    s[r--] = 'L';
                }
            }
            prev = i;
        }
        return s.substr(1, n);
    }
};