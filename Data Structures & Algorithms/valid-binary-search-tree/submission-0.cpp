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
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isTrue(root,LONG_MAX,LONG_MIN);
    }

    private:
    bool isTrue(TreeNode* root, long max1, long min1){
        if(root == nullptr) return true;
        if(root->val<=min1 || root->val>=max1) return false;

        return isTrue(root->left, root->val, min1) && isTrue(root->right, max1, root->val); //IMP

    }
};