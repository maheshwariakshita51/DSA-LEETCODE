
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int middle= (count/2)+1;
        int i=1;
        ListNode*sec = head;
        while(i<middle){
            sec=sec->next;
            i++;
        }
        return sec;
    }
};