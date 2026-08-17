class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int n=nums.size();
      if(n==0)return 0;
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=INT_MIN;
        for(int x:s){
            if(s.find(x-1)==s.end()){
                int it=x;
                int length=1;
                while(s.find(it+1)!=s.end()){
                    it++;
                    length++;
                }
                ans=max(ans,length);
            }
        }
        return ans;

    }
};
