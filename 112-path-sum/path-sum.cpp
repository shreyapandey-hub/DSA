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

    bool hasPathSum(TreeNode* root, int targetSum) {

        // Empty tree
        if(root == NULL)
            return false;

        // Current node ka value subtract
        targetSum -= root->val;

        // Leaf node
        if(root->left == NULL && root->right == NULL)
            return targetSum == 0;

        // Search left OR right
        return hasPathSum(root->left, targetSum) ||
               hasPathSum(root->right, targetSum);
    }
};