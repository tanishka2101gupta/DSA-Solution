class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        int nonZeroPos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                nums[nonZeroPos]=nums[i];
                nonZeroPos++;
            }//end of if block
        }
            for(int i=nonZeroPos;i<nums.size();i++)
            {
                nums[i]=0;
            }
        
    }//end of movezeroes()
};