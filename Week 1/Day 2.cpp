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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> A;
        vector<vector<int>> B;
        if(root==NULL) return B;
        A.push(root);
        while(!A.empty()){
            vector<int> C;
            for(int i=A.size();i>0;i--){
                TreeNode* temp=A.front();
                A.pop();
                if(temp->left!=NULL) A.push(temp->left);
                if(temp->right!=NULL) A.push(temp->right);
                C.push_back(temp->val);
            }
            B.push_back(C);
        }
        vector<vector<int>> D;
        for(int i=B.size()-1;i>=0;i--){
            vector<int> C;
            for(int j=0;j<B[i].size();j++){
                C.push_back(B[i][j]);
            }
            D.push_back(C);
        }
        return D;
    }
};
