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
    int countGoodNodes(TreeNode* root,int maxVal){
        if(root == NULL){
            return 0;
        }
        int good = (root->val >= maxVal) ? 1 : 0;
        maxVal = max(maxVal,root->val);

        good += countGoodNodes(root->left,maxVal);
        good += countGoodNodes(root->right,maxVal);
        return good;
    }

    int goodNodes(TreeNode* root) {
        if(root == NULL)
            return 0;

        return countGoodNodes(root,root->val);  
    }
};