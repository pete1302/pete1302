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
    TreeNode* replaceValueInTree(TreeNode* root) {
        
        queue<TreeNode> qu;
        qu.push(root);
        while(!qu.empty()){
            auto t = qu.top();
            qu.pop();
            int s =0;
            if(t -> left)
                s += t->left->val;
            if(t -> right)
                s += t->rigth->val;
            if(t -> left)
                t -> left -> val = s;
            if(t -> right)
                t -> right -> val = s;
            qu.push(t -> left);
            qu.push(t -> right);
        }
        return root;
    }
};
