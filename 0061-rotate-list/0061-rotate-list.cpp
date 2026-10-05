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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp=head;
        int length=0;
        while(temp){
            temp=temp->next;
            length++;
        }
        k=k%length;
        if(k==0) return head;
        ListNode* prev=NULL;
        temp=head;
        int i=1;
        while(i!=length){
            if(i==length-k){
                prev=temp;
            }
            temp=temp->next;
            i++;
        }
        temp->next=head;
        ListNode* front=prev->next;
        prev->next=NULL;
        return front;
    }
};