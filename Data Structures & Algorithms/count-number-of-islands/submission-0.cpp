class Solution {
public:
    void dfs(vector<vector<char>>&grid, vector<vector<bool>>&visit ,int i,int j){
         int m = grid.size();
         int n = grid[0].size();
         if(i<0 || j<0 || i>=m || j>=n || visit[i][j] || grid[i][j]=='0')return;
         visit[i][j]=true;
         dfs(grid,visit,i+1,j);
         dfs(grid,visit,i-1,j);
         dfs(grid,visit,i,j+1);
         dfs(grid,visit,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int  m = grid.size();
        int n = grid[0].size();
         vector<vector<bool>>visit(m,vector<bool>(n,false));
         int cnt  = 0;
         for(int  i=0 ;i<m ; i++){
            for(int j = 0 ;j<n ; j++){
                if(!visit[i][j] && grid[i][j]=='1'){
                    dfs(grid,visit,i,j);
                    cnt++;
                }
            }
         }
         return cnt;
    }
};
