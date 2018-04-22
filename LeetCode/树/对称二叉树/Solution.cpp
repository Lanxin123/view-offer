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
    bool isSymmetric(TreeNode *root) {
       if(!root) return true;
        return isSymmetric(root->left,root->right);
    }
private:
    bool isSymmetric(TreeNode *p,TreeNode *q){
        if(!p && !q) return true;
        if(!p || !q) return fasle;
        return (p->val==q->val)&&symmetric(p->left,q->right)&&symmetric(p->right,q->left);//p q的值相同，且p的左子树和q的右子树对称，p的右子树和q的左子树对称
    }

};