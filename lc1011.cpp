class Solution {
public:
bool check(vector<int>& w, int d,int m)
{
    int pw=0,i,c=1;
 for(i=0;i<w.size();i++)
 {
    if(pw+w[i]>m)
     { pw=w[i];
      c++;}
      else
      pw+=w[i]; 
     }
     return c<=d;
 }
    int shipWithinDays(vector<int>& w, int d) {
        int i,l,h=0,a=INT_MAX,m,ma=0;
       for(i=0;i<w.size();i++)
        {h+=w[i];
        if(w[i]>ma)
        ma=w[i];}
        l=ma;
        while(l<=h)
         {
            m=l+(h-l)/2;
            if(m>=ma && check(w,d,m))
            {
                if(m<a)
                 a=m;
                h=m-1; 
            }
            else
              l=m+1;
         }
         return a;
    }
};