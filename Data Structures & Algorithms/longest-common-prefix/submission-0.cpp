class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
       int n=INT_MAX;
       for(int i=0;i<strs.size();i++)
       {
        if(n>strs[i].length())
        {
            n=strs[i].length();
        }
       }
       for(int j=0;j<n;j++)
       { char t=strs[0][j];
        bool an=true;
        for(int i=1;i<strs.size();i++)
        {
          if(t!=strs[i][j])
          {
            an=false;
            break;
          }  
        }
        if(an)
        {
            ans+=t;
        }
        else
        
        {
            break;
        }
        
        
       }
       return ans;
    }
};