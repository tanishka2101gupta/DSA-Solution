class Solution 
{
public:
    vector<string> findRelativeRanks(vector<int>& score) 
    {
        int n = score.size();
        vector<int>backupArr(n);
        copy(score.begin(), score.end(), backupArr.begin());
        unordered_map<int,int> historyTable;
        for(int i = 0; i<n; i++)
        {
            historyTable[score[i]]=i;
        }//end of for loop
       sort(backupArr.begin(), backupArr.end(),greater<int>());//lemda predicate
       vector<string> ansArr(n);
       for(int i = 0; i<n; i++)
       {
        int position = historyTable[backupArr[i]];
        if( i == 0)
        {
            ansArr[position] = "Gold Medal";
        }//end of if bock
        else if(i == 1)
        {
            ansArr[position] = "Silver Medal";

        }//end of else if block
        else if(i == 2)
        {
            ansArr[position] = "Bronze Medal";

        }//end of else if block
        else
        {
            ansArr[position] = to_string (i+1);

        }//end of else block
       }//end of for loop
       return ansArr;
 }//end of findRelativeRanks()
};