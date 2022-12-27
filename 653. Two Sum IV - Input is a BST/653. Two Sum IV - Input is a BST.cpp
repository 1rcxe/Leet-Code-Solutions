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
    void inOrder(TreeNode* r , vector<int> &v){
        if(!r){
            return;
        }
        inOrder(r->left,v);
        v.push_back(r->val);
        inOrder(r->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> nums;
        
        inOrder(root,nums);
        int j = nums.size()-1;
        int i = 0;
        sort(nums.begin(),nums.end());
        while (i<j){
            if (nums[i]+nums[j]==k){
                return true;
            }
            else if (nums[i]+nums[j]<k){
                i++;
            }
            else{
                j--;
            }

        }
        return false;
    }
};
