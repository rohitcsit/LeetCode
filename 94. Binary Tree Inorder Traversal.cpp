class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL)return {};
        vector<int> res; stack<TreeNode*>st;
        TreeNode* t =root;
        while(t or !st.empty())
        {
            if(t){st.push(t);t=t->left;}
            else{
                t =st.top();st.pop();
                res.push_back(t->val);
                t = t->right;
            }
        }
        return res;
    }
};