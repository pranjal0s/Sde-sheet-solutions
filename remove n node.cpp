class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*start=new ListNode();
        start->next = head;
        ListNode *f=start;
        ListNode *s=start;
        for(int i=0;i<n;i++){
            f=f->next;
        }
        while(f->next!=NULL){
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
     
        return start->next;
    }
};
