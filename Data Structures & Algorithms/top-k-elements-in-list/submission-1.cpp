class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
       priority_queue<pair<int,int>>q;
       for(auto it:m){
        q.push({it.second,it.first});

       }
       vector<int>ans;
       while(k>0){
        
        ans.push_back(q.top().second);
        q.pop();
        k--;
       }
       return ans;
    }
};
