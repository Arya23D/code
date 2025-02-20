class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxElement = 0;
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(cnt == 0){
                maxElement = nums[i];
                cnt++;
            }
            else if(nums[i] == maxElement){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return maxElement;
    }
};