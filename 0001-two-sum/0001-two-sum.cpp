class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            int num =nums[i];
            int  s = target - num;
            if(mpp.find(s) !=mpp.end())
            {
                return {mpp [s], i};
            }
            mpp[num]=i;
        }
        return {-1,1};
    }
};