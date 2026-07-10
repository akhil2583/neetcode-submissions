class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
    map<int,vector<int>,greater<int>>ma;
    for(auto i:m)
    {
        ma[i.second].push_back(i.first);
    }
    for(auto i:ma)
    {
        if(k>0)
        {
           k-=i.second.size();
        for(int j=0;j<i.second.size();j++)
        {
            ans.push_back(i.second[j]);
        }

        }
        else
        {
            break;
        }
    }
        return ans;
    }
};
