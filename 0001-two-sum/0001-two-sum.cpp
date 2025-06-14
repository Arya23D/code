class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp ;
        int a = nums.size();
        for (int i =0 ; i<a ;i++)
        {
        int curr = nums[i] ;
        int more = target - curr ;
        if (mpp.find(more) != mpp.end())
        {
            return {mpp[more] , i};
        }
        mpp[curr]= i;
        }
        return {} ;  
    }
};
