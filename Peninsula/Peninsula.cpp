 #include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   vector < vector <int> > dp;
   bool flag;
   void dfs(vector<vector<int>>& g, int i, int j, int n, int m){
      if(i>=n || j >=m || i<0 || j<0){
         flag = false;
         return ;
      }
      if(g[i][j] == 1 || g[i][j] == -1)return;
      if(g[i][j] == 0)g[i][j] = -1;
      dfs(g, i+1, j, n, m);
      dfs(g, i, j+1, n, m);
      dfs(g, i-1, j, n, m);
      dfs(g,i, j-1, n, m);
   }
   int closedForest(vector<vector<int>>& g) {
      int ans = 0;
      int n = g.size();
      int m = g[0].size();
      dp = vector < vector <int> > (n, vector <int> (m, -1));
      for(int i = 0; i < n ; i++){
         for(int j = 0; j < m; j++){
            if(g[i][j] == 0){
               flag = true;
               dfs(g, i , j ,n ,m);
               ans += flag;
            }
         }
      }
   return ans;
   }
};
main(){
   vector<vector<int>> v;
   int r,c;
   cin>>r>>c;
   for(int i=0;i<r;i++)
   {  vector<int> h;
    for(int j=0;j<c;j++)
	{      int u;
		   cin>>u;
		   h.push_back(u);
	}
	v.push_back(h);
   }
		
   Solution ob;
   cout << (ob.closedForest(v));
}