class Solution {
public:
    string minWindow(string s, string t) {
        int i=0,j=0,c=0;
        string ans="",st="";
        unordered_map<char,int>m;
        for(char x:t)
         m[x]+=1;
         if(s.size()==t.size())
           {
            for(char x: s)
             {if(m[x]<=0)
              return "";
              m[x]--;
              }
              return s;

           }
        while(j<=s.size())
        {
            if(c==t.size())
            {
              if(ans.size()==0 ||ans.size()>st.size())
                ans=st;
              m[s[i]]++;
              c--;
              i++;
              st.erase(st.begin());
            }
              while(i<s.size() && (m.find(s[i])==m.end() || (m.find(s[i])!=m.end() && m[s[i]]<0))) 
              {
                if(m.find(s[i])!=m.end() && m[s[i]]<0) 
                 m[s[i]]++;
                if(st.size()>0)
                st.erase(st.begin());
                i++;   
              }
             if(j<i)
              i=j;

            if(j<s.size() && m.find(s[j])!=m.end())  
            {
                if(m[s[j]]>0)
                  c++;
                 m[s[j]]--;
            }
            if(j<s.size())
            {st.push_back(s[j]);  
            j++;} 
            if(j>=s.size() && c==t.size())     
            continue; 
            else if(j>=s.size())
             break;  

        }
        if(c==t.size())
             {if(st.size()<ans.size() ||ans.size()==0)
              ans=st;
             }
        return ans;      

    }
};