class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] == 9) digits[i] = 0;
            else {
                digits[i] += 1;//停止进位就停止循环
                return digits;
            }
        }
        if (digits.front() == 0) digits.insert(digits.begin(), 1);//add 1
        return digits;
    }
};