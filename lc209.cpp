class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        deque<int>q;
        int i,p=0,ans=nums.size()+1,su;
        unordered_map<int,int>m;
        for(i=0;i<nums.size();i++)
        {    su=0;
             p+=nums[i];
             m[p]=i;
             q.push_back(p);
             if(p>=t)
             {
                ans=min(ans,m[p]+1);
               while(!q.empty() && (p-q.front())>=t)
                {
                   su=q.front();
                   ans=min(ans,(i-m[su]));
                   q.pop_front();
                }

             }
        }
        if(ans==nums.size()+1)
        return 0;
        return ans;
    }
};
