class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i=0,j=s2.size()-1,c=0;
        unordered_map<char,int>m;
        unordered_map<char,int>d;
        for(char x:s1)
         m[x]+=1;
          j=i;
          d=m;
        while(j<s2.size())
         {
           if(j-i+1>s1.size())
           return true;
           if( m.find(s2[j])==m.end())
        {  while(j<s2.size() && m.find(s2[j])==m.end())
            { j++;
             i=j;
             m=d;}}
           else if(m[s2[j]]==0)
            {while(s2[i]!=s2[j])
           { m[s2[i]]++;
            i++;}
            m[s2[i]]++;
            i++;
            }
            else
          { m[s2[j]]--;
           j++;}
         } 
         if((j-i+1)>s1.size())
             return true;
        return false;
    }
};