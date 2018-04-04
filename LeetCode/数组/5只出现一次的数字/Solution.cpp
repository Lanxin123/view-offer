class Solution {
public:
    int singleNumber(int* nums, int numsSize) {
    int tmp = 0, i;
    for (i = 0; i < numsSize; ++i)
        tmp ^= *(nums + i);
    return tmp;
}
};



//  2 ^ 2 = 0

//  2 ^ 2 ^ 3 = 3

//  2 ^ 3 ^ 2 = 3​