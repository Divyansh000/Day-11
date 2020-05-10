class Solution {
public:
    int findJudge(int n, vector<vector<int>>& v) 
    {
        vector <int> a(n,0);
        int i,j,k;
        for(i=0;i<v.size();i++)
        {
                a[((v[i][0])-1)]=1;
            
        }
        int x=0,ans=0,c=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=1)
            {
                ans=(i+1);
            }
            else
            {
                x++;
            }
        }
        if(x==n)
        {
            return -1;
        }
        for(i=0;i<v.size();i++)
        {
            
                if(v[i][1]==ans)
                {
                    c++;
                }
            
        }
        if(c==(n-1))
        {
            return ans;
        }
        else
        {
            return -1;
        }
        
        
    }
};