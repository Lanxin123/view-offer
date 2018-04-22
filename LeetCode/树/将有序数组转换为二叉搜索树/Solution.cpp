/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return creat(nums,0,nums.size()-1);
    }
    
    TreeNode* creat(vector<int> nums,int  l,int r){
        if(l>r) return NULL;
        int mid = (l+r+1)/2;
        TreeNode *t = (TreeNode*)malloc(sizeof(TreeNode));
        
        t->val = nums[mid];
        t->left = creat(nums,l,mid-1);
        t->right = creat(nums,mid+1,r);
        return t;
    }
};