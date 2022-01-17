  int maxProfit(vector<int>& prices)
    {
        int n = prices.size();
        
        int minVal = prices[0];
        int ans = 0;
        
        for(int i=1;i<n;i++)
        {
            ans = max(ans,prices[i]-minVal);
            
            minVal = min(minVal,prices[i]);
        }
        return ans;
        
    }