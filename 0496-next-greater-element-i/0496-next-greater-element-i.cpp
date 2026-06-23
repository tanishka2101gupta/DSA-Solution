class Solution 
{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int> history_table;
        stack<int> st;
        for(int num : nums2)
        {
            while(!st.empty() && st.top() < num)
            {
                history_table[st.top()] = num;
                st.pop();
                

            }//end of while loop
            st.push(num);
        }//end of for loop
        vector<int> ans;
        for(int num : nums1)
        {
            if(history_table.count(num) == 1)
            { 
                ans.push_back(history_table[num]);  
            }//end of if block
            else
            {
                ans.push_back(-1);
            }//end of else block
        };//end of lor loop
        return ans;
    }//end of nextGreaterElement
};
