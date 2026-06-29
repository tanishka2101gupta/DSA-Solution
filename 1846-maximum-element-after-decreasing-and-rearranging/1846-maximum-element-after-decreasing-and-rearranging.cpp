class Solution
{
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr)
    {
        sort(arr.begin(), arr.end());
        arr[0] = 1;
        for(int pos=1; pos<arr.size(); pos++)
        {
            arr[pos] = min(arr[pos-1]+1, arr[pos]);
        }//end of for loop
        return arr.back();   
    }//end of maximumElementAfterDecrementingAndRearranging()
};