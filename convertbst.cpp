class Solution {
public:
    TreeNode* construct_tree(vector<int>& nums, int left, int right){
        // base case
        
        if(left > right)
            return NULL;
        
        // find the mid
        
        int mid = (left + right) / 2;
        
        // create a node and put nums[mid] as val
        
        TreeNode* root = new TreeNode(nums[mid]);
        
        // call for craeting left substree
        
        root -> left = construct_tree(nums, left, mid - 1);
        
        // call for creating right subtree
        
        root -> right = construct_tree(nums, mid + 1, right);
        
        // return root
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n = nums.size();
        
        return construct_tree(nums, 0, n - 1);
    }
};
