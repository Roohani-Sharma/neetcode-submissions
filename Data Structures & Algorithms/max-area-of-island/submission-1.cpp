class Solution {
public:
   int dfs(vector<vector<int>>&grid,vector<vector<bool>>&visit ,int i , int j){
    int m = grid.size();
    int n = grid[0].size();
    if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || visit[i][j])return 0;
    visit[i][j]=true;
    return 1 +dfs(grid,visit,i+1,j)+dfs(grid,visit,i-1,j)+dfs(grid,visit,i,j+1)+dfs(grid,visit,i,j-1);

   }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int maxarea = 0;
        vector<vector<bool>>visit(m,vector<bool>(n,false));
        for(int i = 0 ; i<m ; i++){
            for(int j =0; j<n ; j++){
             if(!visit[i][j] && grid[i][j] == 1){
                int area = dfs(grid,visit,i,j);
                maxarea = max(area,maxarea);
             }
            }
        }
        return maxarea;
    }
};
