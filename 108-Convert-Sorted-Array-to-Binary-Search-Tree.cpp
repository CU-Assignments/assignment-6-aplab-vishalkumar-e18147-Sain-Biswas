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
class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return treeConstructor(nums, 0, nums.size() - 1);
    }

    TreeNode *treeConstructor(vector<int> nums, int left, int right)
    {
        if (left > right)
            return nullptr;

        int mid = (left + right) / 2;
        TreeNode *node = new TreeNode();

        node->val = nums[mid];

        node->left = treeConstructor(nums, left, mid - 1);
        node->right = treeConstructor(nums, mid + 1, right);

        return node;
    }
};