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
    ListNode* reverseList(ListNode* head) {
        ListNode* pRever = NULL;
        ListNode* pNode = head;
        ListNode* pPrev = NULL;
        while(pNode!=NULL)
        {
            ListNode* pNext = pNode->next;
            if(pNext==NULL)
                pRever = pNode;
            pNode->next = pPrev;
            pPrev = pNode;
            pNode = pNext;
        }
        return pRever;
    }
};