class Solution {
public:
vector<vector<string>>a;
unordered_map<string,bool>m;
bool pal(string c)
{ if(c.size()==1)
      return true;
    int i=0,j=c.size()-1;
    while(j>i)
    {
        if(c[i++]!=c[j--])
          return false;
    }
    m[c]=true;
     return true;
}
void check(string& s,int i,vector<string>&k)
{   
   if(i==s.size())
        {
            if(m.find(k[k.size()-1])!=m.end() ||pal(k[k.size()-1]))
            a.push_back(k);
           return;}
    if(m.find(k[k.size()-1])!=m.end() || pal(k[k.size()-1]))    
    { k.push_back(string(1,s[i]));
     check(s,i+1,k);
    k.pop_back();
    }
    if(k.size()!=0)
   {k[k.size()-1].push_back(s[i]);
      check(s,i+1,k); }   
}
    vector<vector<string>> partition(string s) {
        vector<string>k;
        k.push_back(string(1,s[0]));
        check(s,1,k);
        return a;
    }
};