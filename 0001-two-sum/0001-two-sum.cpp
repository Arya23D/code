class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) { // alg variable nahi declare kiye size ke liye nums.size () function use kar liye
            int a = nums[i];
            int more = target - a;
            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }
            mpp[a] = i;
        }
        return {}; // return empty vector if no solution is found
    }
};
