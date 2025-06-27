class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n=nums1.size();
        int m = nums2.size();
        int i = 0;

        vector<int>result;

        while(i<n)
        {
            int j=0;
            while(j<m && nums1[i]!=nums2[j])
            {
                j++;
            }
            j++;
            while(j<m && nums2[j]<=nums1[i]){
                j++;
            }
            if (j<m)
            {
                result.push_back(nums2[j]);
            }
            else{
                result.push_back(-1);
            }
            i++;
        }
        return result;
        
    }
};