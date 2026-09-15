class Solution {
public:
int solve(int idx,int n,vector<int>& cost,vector<int>&dp){
    if(idx>=n)return 0;
    if(dp[idx]!=-1)return dp[idx];
    return dp[idx]=min(cost[idx]+solve(idx+1,n,cost,dp),cost[idx]+solve(idx+2,n,cost,dp));
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(solve(0,n,cost,dp),solve(1,n,cost,dp));
    }
};
