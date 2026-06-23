class Solution 
{
    public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> historyMap;
        for(int i=0;i<nums.size();i++)
        {
            if(historyMap.find(target-nums[i])==historyMap.end())
            {
                historyMap[nums[i]]=i;
            }
            else
            {
                return{historyMap[target-nums[i]],i};

            }
        }
        return{-1,-1};
    }
};