
class Solution {
public:
    // Helper function to count subarrays with sum at most goal
    int atMost(vector<int>& nums, int k) {
        if (k < 0) return 0; // No subarrays possible
        int l = 0, r = 0, sum = 0, count = 0;

        for (r = 0; r < nums.size(); r++) {
            sum += (nums[r]%2);

            while (sum > k) {
                sum -= (nums[l]%2);
                l++;
            }

            count += (r - l + 1); // Number of subarrays ending at r
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
