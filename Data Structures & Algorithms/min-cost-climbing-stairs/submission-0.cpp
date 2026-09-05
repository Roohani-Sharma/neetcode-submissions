class Solution {
public:
int memo(vector<int>&cost , vector<int>&dp , int i){
    int n = cost.size();
    if(i>=n)return 0;
    
    if(dp[i] != -1)return dp[i];
    dp[i] = cost[i] + min(memo(cost,dp,i+1) , memo(cost,dp,i+2));
    return dp[i];
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n,-1);
        return min(memo(cost,dp,0),memo(cost,dp,1));
    }
};
