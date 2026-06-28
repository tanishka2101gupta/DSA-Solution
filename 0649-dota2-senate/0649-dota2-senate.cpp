class Solution 
{
public:
    string predictPartyVictory(string senate) 
    {
        int n = senate.size();
        queue<int> qD;
        queue<int> qR;
        for(int i = 0; i < n; i++)
        {
            if(senate[i] == 'D')
            {
                qD.push(i);
            }// END OF IF BLOCK
            else // if(senate[i] == 'R)
            {
                qR.push(i);
            }// end of alse block
        }// end of for loop
        while(!qD.empty() && !qR.empty()) // if both queue have the values
        {
            int indexD = qD.front();
            qD.pop();
            int indexR = qR.front();
            qR.pop();

            if(indexD < indexR)
            {
                qD.push(n + indexD);
            }// end of if block
            else // if(indexR < indexD)
            {
                qR.push(n + indexR);
            }// end of else block
        }// end of while loop
        string ans;
        if(qD.empty())
        {
            ans = "Radiant";
        }// end of if block
        else
        {
            ans = "Dire";
        }
        return ans;
    }// END OF PREDICTPARTYVICTORY
};