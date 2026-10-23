/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
bool validate(TreeNode*root,TreeNode*max, TreeNode*min){
    if(root==NULL)return true;
    if(max != NULL && root->val >= max->val)return false;
    if(min != NULL && root->val <= min->val)return false;
    return validate(root->left,root,min) && validate(root->right,max,root);
}
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root,NULL,NULL);
    }
};
