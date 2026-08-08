class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int i;
        typedef pair<int,int>p;
        unordered_map<int,int>m;
        vector<int>a;
        priority_queue<p>pq;
        for(i=0;i<nums.size();i++)
            m[nums[i]]+=1;    
        for( auto x : m)
        pq.push({x.second,x.first});
        while(k>0)
             {
             a.push_back(pq.top().second);
             pq.pop();
             k--;
             }    

return a;
    }
};