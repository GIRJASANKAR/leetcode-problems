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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        int middlenode=0;
        ListNode* h=head;
        ListNode* m=head;
        while(h!=NULL){
            count++;
            h=h->next;
        }
        if(count%2==0){
            middlenode=count/2+1;
        }else{
           middlenode=(count-1)/2+1; 
        }

    while(middlenode!=1){
     head=head->next;
     middlenode--;
    }
    return head;
    
    }
};