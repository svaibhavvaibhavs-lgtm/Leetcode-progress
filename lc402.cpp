class Solution {
public:
    string removeKdigits(string nums, int k) {
        stack<char>s;
        s.push(nums[0]);
        int c=k,i;
        string st="";
        for(i=1;i<nums.size();i++)
        {
         while(!s.empty() && c>0&& (nums[i]-'0')<(s.top()-'0'))
             {s.pop();
             c--;}
         s.push(nums[i]);     
        }
        while(s.size()>(nums.size()-k))
          s.pop(); 
        while(!s.empty())
        { 
          st.push_back(s.top());
          s.pop(); 
        } 
        reverse(st.begin(),st.end());
        while(st.front()=='0')
         st.erase(st.begin());
        if(st.size()==0)
         return "0";
        return st; 
    }
};