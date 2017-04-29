/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
	TreeNode* rbt(vector<int>& pre, vector<int>& vin, int pi, int pj, int vi, int vj) {
		if(pi > pj || vi > vj) return nullptr;

		int left = 0;
		while(vin[vi + left] != pre[pi]) ++left;

		TreeNode * root = new TreeNode(pre[pi]);
		root -> left = rbt(pre, vin, pi + 1, pi + left, vi, vi + left - 1);
		root -> right = rbt(pre, vin, pi + left + 1, pj, vi + left + 1, vj);

		return root;
	}
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
    	return rbt(pre, vin , 0, pre.size() - 1, 0, vin.size() - 1);
    }
};