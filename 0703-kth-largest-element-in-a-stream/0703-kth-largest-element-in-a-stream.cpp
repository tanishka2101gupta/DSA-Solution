class KthLargest 
{
    int k;
    priority_queue<int, vector<int>,greater<int>> pq;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int n : nums)
        {
            add(n);
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > k)
        {
            pq.pop();
        }
        return pq.top();
    }
};