class Solution {
public:
    string removeOuterParentheses(string s) {
        int sum=0;
        string result;

        for(char ch: s)
        {
            if(ch=='('){
                if(sum>0)
                result += ch;
                sum++;
            }
            else{
                if(ch==')')
                sum--;
                if(sum>0)
                result += ch;
            }
        }

        return result;
        
    }
};