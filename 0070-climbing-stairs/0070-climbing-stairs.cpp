class Solution {
public:
    int climbStairs(int n) {
        if(n==0||n==1) // intializing the base case that if n = 0 it will remain to that stair only and if n= 1 it can only step  i.e 1
        {
            return 1; // for base case always return 1
        }
        vector<int>dp(n+1); // creating array of size n+1 
        dp[0]=dp[1]=1;   // setting base case 

        for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+dp[i-2];  // formula for summing up 
        }
        return dp[n]; 

    }
};