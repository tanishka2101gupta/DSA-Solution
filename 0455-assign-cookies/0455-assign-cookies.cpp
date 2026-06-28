class Solution 
{
public:
    int findContentChildren(vector<int>& g, vector<int>& s) 
    {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gid = 0;
        int sid = 0;
        while(gid<g.size() && sid<s.size())
        {
            if(s[sid] >= g[gid])
            {
                gid++;
            }//end of if block
            sid++;
        }//end of while loop
        return gid;   
    }// end of findContentChildren
};