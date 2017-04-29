class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int low = 0, high = rotateArray.size() - 1, mid;
        while(high >= 0 && rotateArray[high] == rotateArray[low]) --high;
        while(low < high) {
        	mid = (low + high) >> 1;
        	if(rotateArray[mid] < rotateArray[0])
        		high = mid;
        	else
        		low = mid + 1;
        }
        return rotateArray[low];
    }
};