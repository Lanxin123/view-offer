class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        assert(nums.size!=0);
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums[k]);
        reverse(nums[k+1],nums.end());
    }
};