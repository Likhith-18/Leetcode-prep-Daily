class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> rowCnt(grid.size());
        vector<int> colCnt(grid[0].size());
        
        // Calculate row and colCntumn sums
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                rowCnt[i] += grid[i][j];
                colCnt[j] += grid[i][j];
            }
        }
        
        int ans = 0;
        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j<grid[0].size(); j++) {
                if (grid[i][j]==1 && (rowCnt[i]>1 || colCnt[j]>1)) {
                    ans++;
                }
            }
        }
        return ans;
    }
};