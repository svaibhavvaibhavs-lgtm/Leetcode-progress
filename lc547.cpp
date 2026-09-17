class Solution {
public:
void check(int j, vector<bool>&v,vector<vector<int>>& c)
{   int i=0;
    for(i=0;i<c.size();i++)
    {   if(c[j][i]==1)
        {if(!v[i])
         {v[i]=true;
         check(i,v,c);}
         }
    }
}
    int findCircleNum(vector<vector<int>>& c) {
        int i,ans=0;
        vector<bool>visited(c.size(),false);
        for(i=0;i<c.size();i++)
         {
            if(!visited[i])
            { visited[i]=true;
             ans++;
            check(i,visited,c);}
         }
         return ans;
    }
};