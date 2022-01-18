class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        vector<bool> record(n);
        for(int i=0;i<n;i++)
            record[nums[i]]=true;
        for(int i=1;i<=n;i++)
        {
            if(record[i]==false)
                res.push_back(i);
        }
        return res;
    }
};