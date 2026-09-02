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
    vector<vector<int>> ans;
    vector<int> path;

    void solve(TreeNode* root, int targetSum) {
        if (root == NULL)
            return;

        // current node ko path me add karo
        path.push_back(root->val);

        // leaf node check
        if (root->left == NULL && root->right == NULL) {
            if (targetSum == root->val) {
                ans.push_back(path);
            }
        }
        else {
            // left subtree
            solve(root->left, targetSum - root->val);

            // right subtree
            solve(root->right, targetSum - root->val);
        }

        // backtracking
        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root, targetSum);
        return ans;
    }
};