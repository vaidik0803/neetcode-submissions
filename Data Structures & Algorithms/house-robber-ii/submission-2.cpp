class Solution {
public:
int solve(int idx,vector<int>& nums,int end,vector<int>&dp){
    if(idx>end)return 0;
    if(dp[idx]!=-1)return dp[idx];
    int take=nums[idx]+solve(idx+2,nums,end,dp);
    int nottake=solve(idx+1,nums,end,dp);
    return dp[idx]=max(take,nottake);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],nums[1]);
        vector<int>dp(n,-1);
        int one=solve(0,nums,n-2,dp);
        vector<int>dp1(n,-1);
        int two=solve(1,nums,n-1,dp1);
        return max(one,two);
        
    }
};
