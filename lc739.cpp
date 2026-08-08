class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
     typedef pair<int,int>p; 
     stack<p>s;
     vector<int>v(t.size());
     int i;
     for(i=t.size()-1;i>=0;i--)
     {
        while(!s.empty() && t[i]>=s.top().first)
          s.pop();
         if(s.empty())
            v[i]=0;
         else
          v[i]=s.top().second-i;
          s.push({t[i],i});    
     }   
     return v;
    }
};