class Solution {
public:
vector<int> solve(unordered_map<int,vector<int>>&adj,int n,vector<int>&indegree){
    int count=0;
    queue<int>q;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0){q.push(i);count++;}

    }
    vector<int>ans;
    while(!q.empty()){
        int x=q.front();
        q.pop();
        ans.push_back(x);
        for(auto u:adj[x]){
            indegree[u]--;
            if(indegree[u]==0){
                q.push(u);
                count++;
            }
        }
    }
    if(count==n)return ans;
    return {};
}
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
         unordered_map<int,vector<int>>adj;
        vector<int>indegree(numCourses,0);
        for(auto v:prerequisites){
            int a=v[0];
            int b=v[1];
            adj[b].push_back(a);
            indegree[a]++;
        }
        return solve(adj,numCourses,indegree);
    }
};
