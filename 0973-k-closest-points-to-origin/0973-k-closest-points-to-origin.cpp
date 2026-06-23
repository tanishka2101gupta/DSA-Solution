class Solution 
{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        priority_queue< pair<int, vector<int> > > pq;
        for(auto& point : points)
        {
            int distance= point[0]* point[0]+ point[1]* point[1];
            pq.push({ distance,point} );
            if(pq.size()>k)
            {
                pq.pop();

            }//end of if block
        }//end of for loop
        vector<vector<int>> result;
        while(!pq.empty())
        {
            result.push_back(pq.top().second);
            pq.pop();
        }//end of while loop
        return result;
    }//end of kclosest()
};