class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int n= s.length();
        vector<int> hash(256,-1);
        int maxlen=0;

        while(r<n)
         {
            if(hash[s[r]]!=-1)
            {
                if(hash[s[r]]>=l)
                {
                    l=hash[s[r]]+1 ;
                }
            }
            int leng = r-l+1;
            maxlen=max(leng,maxlen);
            hash[s[r]]=r;
            r++;
         }
         return maxlen;
        
    }
};