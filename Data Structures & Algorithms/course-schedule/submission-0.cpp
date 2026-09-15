class Solution {
public:
bool solve(unordered_map<int,vector<int>>&adj,int n,vector<int>&indegree){
    int count=0;
    queue<int>q;
    for(int i=0;i<indegree.size();i++){
        if(indegree[i]==0){q.push(i);count++;}

    }
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for(auto u:adj[x]){
            indegree[u]--;
            if(indegree[u]==0){
                q.push(u);
                count++;
            }
        }
    }
    return count==n;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
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
