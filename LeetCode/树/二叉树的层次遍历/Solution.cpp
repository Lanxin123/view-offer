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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;  
        queue<TreeNode*>q;              
        vector<int> level;       //每层结果  
        int size,i;  
        TreeNode* p;  
          
        if(root==NULL) return result;  
        q.push(root);            //入队  
        while(!q.empty()) {  
            //队列中有几个元素就依次遍历每个元素的左右结点  
            level.clear();  
            size=q.size();  
            for(i=0; i<size; i++) {  
                p=q.front();     //队首元素值赋给p  
                q.pop();         //出队  
                level.push_back(p->val);  
                if(p->left) {    //依次压入左右结点元素  
                    q.push(p->left);  
                }  
                if(p->right) {  
                    q.push(p->right);  
                }  
            }  
            result.push_back(level);   //添加每层数据  
        }  
        return result;  
    }  
};