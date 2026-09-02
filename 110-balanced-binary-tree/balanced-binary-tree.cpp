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

    int height(TreeNode* root) {

        if(root == NULL)
            return 0;

        int left = height(root->left);

        // Left subtree unbalanced
        if(left == -1)
            return -1;

        int right = height(root->right);

        // Right subtree unbalanced
        if(right == -1)
            return -1;

        // Current node unbalanced
        if(abs(left - right) > 1)
            return -1;

        // Return height
        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {

        return height(root) != -1;
    }
};