/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
	vector<int> list;
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        if(!head) return vector<int>();
        printListFromTailToHead(head -> next);
        list.push_back(head -> val);
        return list;
    }
};