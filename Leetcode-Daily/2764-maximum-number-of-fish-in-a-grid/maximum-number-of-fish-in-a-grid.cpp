class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<pair<int,int>> dir = {{-1,0},{0,1},{1,0},{0,-1}};

        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0 && !vis[i][j]){
                    int totalWt = 0;
                    dfs(i,j,n,m,grid,vis,totalWt,dir);
                    ans = max(ans,totalWt);
                }
            }
        }

        return ans;
    }

    void dfs(int i,int j,int n,int m,vector<vector<int>>& grid,vector<vector<bool>>& vis, int& totalWt,vector<pair<int,int>> &dir){
        if(i<0||i>=n||j<0||j>=m||grid[i][j]==0||vis[i][j]){
            return;
        }

        vis[i][j] = true;
        totalWt += grid[i][j];

        for(auto it:dir){
            dfs(i+it.first,j+it.second,n,m,grid,vis,totalWt,dir);
        }
    }
};