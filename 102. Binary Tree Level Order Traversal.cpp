
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == NULL) return res;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            vector<int> t;
            int s = q.size();

            for (int i = 0; i < s; i++) {
                TreeNode* x = q.front();
                q.pop();
                t.push_back(x->val);

                if (x->left) q.push(x->left);
                if (x->right) q.push(x->right);
            }

            res.push_back(t);
        }

        return res;
    }
};
