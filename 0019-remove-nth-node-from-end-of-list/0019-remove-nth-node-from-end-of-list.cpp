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
    ListNode* removeHead(ListNode* head){
        if(head==nullptr || head->next==nullptr) return NULL;
        ListNode* front=head->next;
        head->next=NULL;
        return front; 
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int length=0;
        while(curr){
            length++;
            curr=curr->next;
        }
        int newN=length-n+1;
        if(newN!=1){
            curr=head;
            int i=1;
            while(i!=newN-1){
                curr=curr->next;
                i++;
            }
            ListNode* front=curr->next;
            curr->next=front->next;
            front->next=nullptr;
            delete front;
        }else{
            return removeHead(head);
        }
        return head;
    }
};