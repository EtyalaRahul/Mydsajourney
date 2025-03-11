class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if (root == nullptr) {
            return ans;
        }

        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> rare;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* temp = q.front();
                q.pop();
                rare.push_back(temp->val);

                if (temp->left != nullptr) {
                    q.push(temp->left);
                }

                if (temp->right != nullptr) {
                    q.push(temp->right);
                }
            }

            ans.push_back(rare);
        }

        return ans;
    }
};

