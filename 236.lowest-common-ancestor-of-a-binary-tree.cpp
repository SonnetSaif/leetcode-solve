class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || (root->val == p->val) || (root->val == q->val)) return root;

        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        if(left==nullptr && right==nullptr) return nullptr;
        if(left && right) return root;

        return (left!=nullptr) ? left : right;
    }
};
