class Solution {
public:
bool solve(int i,int j,string &s,vector<vector<int>>&dp){
    if(i>=j)return true;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]!=s[j])return false;
    return dp[i][j]=solve(i+1,j-1,s,dp);
}
    string longestPalindrome(string s) {
        int n=s.size();
        int start=0,maxlen=1;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(solve(i,j,s,dp)){
                    if(j-i+1>maxlen){
                        maxlen=j-i+1;
                        start=i;
                    }

                }
            }
        }
        return s.substr(start,maxlen);
        
    }
};