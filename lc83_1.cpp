/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *node = head;
        while(node->next != NULL) {
        	if(node->val == node->next->val){
        		node->next = node->next->next;
        		continue;
        	}
        	node = node->next;
        }
        return head;
    }
};