class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_curr=0;
        int max_till_here=0;
        for(int i=0;i<nums.size();i++)
        {
            max_curr=max_curr+nums[i];
            if(max_till_here<=max_curr)
                max_till_here=max_curr;
            if(max_curr<0)
                max_curr=0;
        }
        return max_till_here;
    }
};