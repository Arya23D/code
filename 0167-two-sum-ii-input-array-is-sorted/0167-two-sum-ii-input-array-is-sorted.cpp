class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int , int> mpp;
        int n = numbers.size();
        for(int i=0 ; i<n ; i++)
        {
        int a = numbers[i];
        int more = target - a ;
        if (mpp.find(more) != mpp.end())
        {
            return {mpp[more]+1 , i+1} ;
        }
        mpp[a] = i;
        } 
        return {} ;
    }
};