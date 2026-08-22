class Solution {
public:
void bfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& grid){
    int m=grid.size();
        int n=grid[0].size();
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for (int k = 0; k < 4; k++) {
            int nrow = row;
            int ncol = col;

        
               if (k == 0) nrow = row + 1;        
               else if (k == 1) nrow = row - 1;   
             else if (k == 2) ncol = col + 1;   
              else if (k == 3) ncol = col - 1;
                    if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && !vis[nrow][ncol] && grid[nrow][ncol]=='1'){
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                         
                    }
                }
            }
        

}
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    ans++;
                    bfs(i,j,vis,grid);

                }
            }
        }
        return ans;
    }
};