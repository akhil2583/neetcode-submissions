class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
      int ans=1,k=1;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int p=m.begin()->first;
       for(auto i:m)
       {
        if(i.first==p)
        {
            continue;
        }
        else if(i.first==p+1)
        {
          k++;
          ans=max(ans,k);
        }
        else
        {
            k=1;
        }
        p=i.first;
       }
       return ans;

    }
};
