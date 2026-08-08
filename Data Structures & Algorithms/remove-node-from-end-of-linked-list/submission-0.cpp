/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            if(head==NULL)return head;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        ListNode* temp1=head;
        
         
        if (n == count) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        for(int i=0;i<count-n-1;i++){
            
            temp1=temp1->next;


        }
        ListNode* Delete=temp1->next ;
        temp1->next=Delete->next;
        delete(Delete);
        return head;
    }
};
