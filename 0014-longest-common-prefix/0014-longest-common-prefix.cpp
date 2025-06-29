class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty())
        return " ";
        string pref = strs[0];
        int preflength = pref.length();

        for(int i =1 ; i<strs.size(); i++)
        {
            string s= strs[i];
            while(preflength>s.length() || pref.substr(0, preflength) != s.substr(0 , preflength))
            preflength-- ;

            if(preflength==0)
            {
                return "";
            }
            pref= pref.substr(0, preflength);
        }
        return pref ;
        
    }
};