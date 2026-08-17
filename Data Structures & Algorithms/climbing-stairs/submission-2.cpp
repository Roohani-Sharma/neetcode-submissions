class Solution {
public:
    int help(int n,vector<int>&dp){
        //using memoization
        if(n==0)return 0;
        if(n==1)return 1;
        if(n==2)return 2;
        if(dp[n-1] != -1)return dp[n-1];
        dp[n-1] = help(n-1,dp)+help(n-2,dp);
        return dp[n-1];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return help(n,dp);
    }
};
