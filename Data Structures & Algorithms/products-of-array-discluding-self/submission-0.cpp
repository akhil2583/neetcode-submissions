class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      long long int p=1;
      int cz=0;
      vector<int>ans;
      for(int i=0;i<nums.size();i++)
      { if(nums[i]==0)
      {
        cz++;
      }
      else
      {
        p*=nums[i];
      }
      }
      if(cz>=2)
      {
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(0);
        }
      }
      else if(cz==1)
      {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                ans.push_back(p);
            }
            else
            {
                ans.push_back(0);
            }
        }
      }
      else
      {
      for(int i=0;i<nums.size();i++)
      {
        ans.push_back(p/nums[i]);
      }
      }
      return ans;
    }
};
