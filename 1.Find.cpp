class Solution {
public:
    bool Find(int target, vector<vector<int>> array) {
        int m = array.size(), n = m > 0 ? array[0].size() : 0;
        int i = 0, j = n - 1;
        while(i < m && j >= 0) {
        	if(array[i][j] == target)
        		return true;
        	else if(array[i][j] > target)
        		--j;
        	else
        		++i;
        }
        return false;
    }
};