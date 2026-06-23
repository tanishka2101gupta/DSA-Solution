class Solution 
{
    public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_set <int> history;
        long long currentSum=0;
        long long maxSum=0;
        int left = 0;
        for(int right=0; right<n; right++)
        {
            while(history.count(nums[right]) == 1)//count function leads to searching
            {
                currentSum = currentSum-nums[left];
                history.erase(nums[left]);//delete from history too
                left++;
            }//end of while loop
            history.insert(nums[right]);
            currentSum = currentSum + nums[right];
            if((right-left) + 1 == k)
            {
                maxSum = max(maxSum,currentSum );
                //slide the window forward by removing the left most element
                currentSum = currentSum - nums[left];
                history.erase(nums[left]);
                left++;
            }//end of if loop
        }//end of for loop
        return maxSum;   
    }//end of maximumSubarraySum()
};