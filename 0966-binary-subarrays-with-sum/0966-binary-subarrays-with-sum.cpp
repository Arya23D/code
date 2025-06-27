class Solution {
public:
    // Helper function to count subarrays with sum at most goal
    int atMost(vector<int>& nums, int goal) {
        if (goal < 0) return 0; // No subarrays possible
        int l = 0, r = 0, sum = 0, count = 0;

        for (r = 0; r < nums.size(); r++) {
            sum += nums[r];

            while (sum > goal) {
                sum -= nums[l];
                l++;
            }

            count += (r - l + 1); // Number of subarrays ending at r
        }

        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};
