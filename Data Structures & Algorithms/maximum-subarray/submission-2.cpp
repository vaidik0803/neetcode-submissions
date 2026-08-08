class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int sum=0,i=0,maxsum=INT_MIN;
        while(i<n){
            sum+=nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
                

            }
            i++;
        }
        return maxsum;

    }
};
