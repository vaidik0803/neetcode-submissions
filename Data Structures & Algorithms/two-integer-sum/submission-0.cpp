class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int more=target-nums[i];
            if(m.find(more)!=m.end()){
                return {m[more],i};
            }
            m[nums[i]]=i;
        }
        return {-1,-1};
    }
};
