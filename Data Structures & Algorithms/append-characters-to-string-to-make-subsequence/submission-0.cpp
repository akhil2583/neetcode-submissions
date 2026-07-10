class Solution {
public:
    int appendCharacters(string s, string t) {
         int i=0,j=0;
        while(s.length()>i && t.length()>j)
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        return t.length()-j;
    }
};