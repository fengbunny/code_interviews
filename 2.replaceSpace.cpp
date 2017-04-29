class Solution {
public:
	void replaceSpace(char *str,int length) {
		int space = 0;
		for(int i = 0; i < length; ++i) 
			if(str[i] == ' ') ++space;
		for(int i = length - 1, j = length + (space << 1) - 1; i >= 0 && j >= 0; --i, --j) {
			if(str[i] == ' ') {
				j -= 2;
				strncpy(&str[j], "%20", 3);
			}
			else
				str[j] = str[i];
		}
	}
};