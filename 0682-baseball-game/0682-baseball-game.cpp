class Solution 
{
public:
    int calPoints(vector<string>& operations) 
    {
        stack<int> scoreStack;
        for(string op : operations)
        {
            if(op == "C")
            {
                scoreStack.pop();
            }//end of if block
            else if(op == "D")
            {
                scoreStack.push(2*scoreStack.top());
            }//end of else if block
            else if(op == "+")
            {
                int topScore = scoreStack.top();
                scoreStack.pop();
                int secondTopScore = scoreStack.top();
                scoreStack.push(topScore);
                int sum = topScore + secondTopScore;
                scoreStack.push(sum);
                }//end of else if block
                else
                {
                scoreStack.push(stoi(op));
                }//end of else block
        }//end of for loop  
        int total = 0;
        while (!scoreStack.empty()) 
        {   total = total + scoreStack.top();
            scoreStack.pop();
        }
            return total;

    }// end of calPoints
};