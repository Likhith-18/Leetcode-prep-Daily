class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        long long topSum = accumulate(begin(grid[0]),end(grid[0]),0LL);
        long long btmSum = 0;
        long long res = LLONG_MAX;


        for(int i=0;i<n;i++){
            topSum -= grid[0][i];
            res = min(res,max(topSum,btmSum));
            btmSum += grid[1][i];
        }

        return res;
    }
};