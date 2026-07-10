class Solution {
public:
    int lengthOfLastWord(string s) {
       int j=s.length(),f=0,l=-1;
       while(j>=0)
       {
        if(s[j-1]!=' ' && l==-1)
        {
         l=j;
        }
        if(s[j-1]==' ' && l!=-1)
        {
            f=j;
            break;
        }
        j--;
       }
       return l-f;

    }
};