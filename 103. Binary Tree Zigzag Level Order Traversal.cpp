
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;if(root==NULL)return res;
        stack<TreeNode*> s1,s2;s1.push(root);
        while(!s1.empty() or !s2.empty()){
            vector<int> t;
            while(!s1.empty()){
                TreeNode *x=s1.top();s1.pop();
                t.push_back(x->val);
                if(x->left)s2.push(x->left);
                if(x->right)s2.push(x->right);
            }
            if(t.size()!=0){res.push_back(t);t.clear();}

            while(!s2.empty()){
                TreeNode *x=s2.top();s2.pop();
                t.push_back(x->val);
                if(x->right)s1.push(x->right);
                if(x->left)s1.push(x->left);
                
            }
            if(t.size()!=0){res.push_back(t);t.clear();}
        } 
        return res;  
    }
   
};
