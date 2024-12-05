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
    void leaf(TreeNode* root,vector<int>&temp){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            temp.push_back(root->val);
        }
        leaf(root->left,temp);
        leaf(root->right,temp);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> left,right;

        leaf(root1,left);
        leaf(root2,right);

        return left == right;
    }
};