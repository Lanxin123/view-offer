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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return head;
        ListNode* left = head,* right = head;
        while(n)
        {
            right = right->next;
            --n;
        }
        while(right->next)
        {
            left = left->next;
            right = right->next;
        }
        
        ListNode* nxt = left->next;
        
        left->next = nxt->next;
        
        
        return head;
    }
};