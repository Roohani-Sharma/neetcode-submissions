class Solution {
public:
    int memo_LIS(vector<int>&nums, vector<vector<int>>&dp , int curr , int prev){
        int n = nums.size();
        
        if(curr>=n)return 0;
        if(dp[curr][prev+1] != -1)return dp[curr][prev+1];
        int pick = 0;
        if(prev == -1 || nums[curr] > nums[prev]){
          pick = 1 + memo_LIS(nums,dp,curr+1,curr);
        }
        int not_pick = memo_LIS(nums,dp,curr+1,prev);
        dp[curr][prev+1] = max(pick,not_pick);
        return dp[curr][prev+1];
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return memo_LIS(nums,dp,0,-1);
    }
};
