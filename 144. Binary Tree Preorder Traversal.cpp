class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == NULL) return res;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* current = st.top();
            st.pop();
            res.push_back(current->val);

            if (current->right) {
                st.push(current->right);
            }

            if (current->left) {
                st.push(current->left);
            }
        }

        return res;
    }
};