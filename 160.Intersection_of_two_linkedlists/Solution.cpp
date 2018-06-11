class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        int lenA = length(headA);
        int lenB = length(headB);
        if(lenA < lenB)
           for(int i = 0, n = lenB - lenA; i < n; i++)
               headB = headB->next;
        else
            for(int i = 0, n = lenA - lenB; i < n; i++)
               headA = headA->next;
        while (headA && headB && headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        if(headA && headB)
            return headA;
        else
            return nullptr;
    }
    int length(ListNode *head){
        int n = 0;
        while(head){
            n++;
            head = head->next;
        }
        return n;
    }
};
