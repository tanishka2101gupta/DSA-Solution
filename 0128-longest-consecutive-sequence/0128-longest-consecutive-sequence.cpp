class Solution {
public:
    int longestConsecutive(vector<int>& nums){
        int maxSeq = 0;
        unordered_set<int> numSet(nums.begin(),nums.end());
        for(int num : numSet){
            if(numSet.find(num-1) == numSet.end()){
                int currentNum = num;
                int currentStreak = 1;
                while(numSet.find(currentNum+1) != numSet.end()){
                    currentStreak++;
                    currentNum++;

                }
            if(maxSeq<currentStreak) maxSeq=currentStreak;
            }
        }
        return maxSeq;  
    }
};