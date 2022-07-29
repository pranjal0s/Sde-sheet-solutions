 
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       ListNode *hed =head;
        if(head==NULL||head->next==NULL)
            return true;
        
        ListNode *slow=head;
        ListNode *fast=head;
       
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        // reverse the last half of the linked list
        ListNode *dum=slow->next;
        ListNode *pre=NULL;
        ListNode *next=NULL;
        while(dum!=NULL){
            next=dum->next;
            dum->next=pre;
            pre=dum;
            dum=next;
        }
        slow=pre;
        while(slow!=NULL){
            if(slow->val!=hed->val)
                return false;
    
                slow=slow->next;
                hed=hed->next;
        }
        return true;
    }
};
