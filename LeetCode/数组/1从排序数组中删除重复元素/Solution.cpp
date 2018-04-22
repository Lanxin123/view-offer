class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
	 if (nums.empty()) return 0;
        int pre = 0, cur = 0, n = nums.size();
        while (cur < n) {
            if (nums[pre] == nums[cur]) ++cur;
            else nums[++pre] = nums[cur++];
        }
        return pre + 1;
	
}

};
https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/21/