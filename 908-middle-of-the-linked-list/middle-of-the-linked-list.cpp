
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
         slow=slow->next;
         fast=fast->next->next;   
        }
        return slow;







        // int count=0;
        // while(temp!=NULL){
        //     count++;
        //     temp=temp->next;
        // }
        // int middle= (count/2)+1;
        // int i=1;
        // ListNode*sec = head;
        // while(i<middle){
        //     sec=sec->next;
        //     i++;
        // }
        // return sec;
    }
};