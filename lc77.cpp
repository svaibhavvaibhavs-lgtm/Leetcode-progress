class Solution {
public:
vector<vector<int>>ans;
void check(int n,int k,vector<int>&v,int i)
{
    int j;
    if(v.size()==k)
     {ans.push_back(v);
     return;}
     if(i>n)
      return;
    for(j=i;j<=n;j++)
    {
        v.push_back(j);
        check(n,k,v,j+1);
        v.pop_back();
    }

}
    vector<vector<int>> combine(int n, int k) {
        vector<int>v;
        check(n,k,v,1);
        return ans;
    }
};