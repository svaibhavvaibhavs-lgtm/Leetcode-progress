class Solution {
public:
long long m=0;

    int sumSubarrayMins(vector<int>& arr) {
                int i;
                long long m=0;
               typedef pair<int,int>p;
                vector<int>l(arr.size());
                vector<int>r(arr.size());
               stack<p>lm;
               stack<p>rm;
            for(i=0;i<arr.size();i++)
            {
                while(!lm.empty() && arr[i]<=lm.top().first)
                  lm.pop();
                if(lm.size()==0)
                l[i]=i+1;
                else 
                l[i]=i-lm.top().second;
                lm.push({arr[i],i});
            }
            for(i=arr.size()-1;i>=0;i--)
            {
                while(!rm.empty() && arr[i]<rm.top().first)
                  rm.pop();
                if(rm.size()==0)
                r[i]=arr.size()-i;
                else
                r[i]=rm.top().second-i;
                  rm.push({arr[i],i}); 
            }

        for(i=0;i<arr.size();i++)
            m=(m+(long long)arr[i]*(l[i])*(r[i]))%1000000007;
        return m;
            }
        };