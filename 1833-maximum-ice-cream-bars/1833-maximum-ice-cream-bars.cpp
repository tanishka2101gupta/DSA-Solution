class Solution 
{
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        sort(costs.begin(),costs.end());
        int totalCount=0;
        for(int unitPrice:costs)
        {
            if(coins >= unitPrice)
            {
                coins=coins-unitPrice;
                totalCount++;
            }//end of if block
            else
            {
                break;
            }//end of else block
        }//end of for loop
        return totalCount;
    }//end of maxIcream()
};