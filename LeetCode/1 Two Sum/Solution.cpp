class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> his;
        vector<int> res;
        
        assert(nums.size() != 0);
        
        for(int i = 0;i < nums.size(); i++)
        {
            auto itr = find(his.begin(),his.end(),nums[i]);//find没找到元素返回end();
            
            if(itr != his.end())
            {
                res.push_back(distance(his.begin(),itr));
                res.push_back(i);
            }
            his.push_back(target - nums[i]);
        }
        return res;
    }
};