// 1305. LeetCode Problem
// https://leetcode.com/problems/all-elements-in-two-binary-search-trees/

class Solution {
public:
    void inorder(TreeNode* root, vector<int> &vec){
       if(root == NULL){
           return;
       }
        inorder(root->left,vec);
         vec.push_back(root->val);
         inorder(root->right,vec);

    } 
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        inorder(root1,v1);
        inorder(root2,v2);
        int n = v2.size();
        for(int i=0; i<n; i++){
            v1.push_back(v2[i]);
        }
       sort(v1.begin(), v1.end());
       return v1;

    }
};