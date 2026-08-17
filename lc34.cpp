class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i,l=0,h=nums.size()-1,m,s=-1,e=-1;
        while(l<=h)
        {
            m=l+(h-l)/2;
            if(nums[m]==target)
             {
               s=m;
               h=m-1;
             }
            if(nums[m]<target)
             l=m+1;
             if(nums[m]>target)
             h=m-1;   
        }
        l=0;
        h=nums.size()-1;
        while(l<=h)
        {
            m=l+(h-l)/2;
            if(nums[m]==target)
             {
               e=m;
               l=m+1;
             }
            if(nums[m]<target)
             l=m+1;
             if(nums[m]>target)
             h=m-1;   
        }
        return {s,e};
    }
};