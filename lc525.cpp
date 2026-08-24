class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int a=0,i,p=0;
        unordered_map<int,int>m;
        m[0]=-1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                p=p-1;
            else
                p=p+1;
            if(m.find(p)!=m.end())
                 {
                    if(a<(i-m[p]))
                      a=i-m[p];
                  }
           else
                  m[p]=i;
        }
        return a; 
    }
};