class Solution {
public:
    int minPenalty(int p, vector<int>& l, vector<int>& a) {
        int i,j,r,m=0,ans=0;
        for(i=0;i<l.size();i++)
            {
                m=max(m,l[i]);
            }
                for(j=0;j<a.size();j++)
                    {
                        r=a[j]%p;
                        if(r<m)
                            continue;
                      ans=max(ans,p-r);
            }
                return ans;
    }
};