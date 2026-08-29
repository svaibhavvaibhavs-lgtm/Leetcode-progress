class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0;
        stack<int>s;
        for(int x:prices)
        {
            while(!s.empty() &&x<s.top())
              s.pop();
            if(s.empty())
              {s.push(x);
              continue;}
            m+=x-s.top();
            s.pop();
            s.push(x); 
        }
        return m;
    }
};