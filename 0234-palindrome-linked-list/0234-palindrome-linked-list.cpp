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

 //3 5 6 7 9 7 6 5 3
 //1 2 3 2 1
class Solution {
public:
    ListNode* reverseLL(ListNode* head){
        ListNode* prev=NULL;
        ListNode* current=head;
        while(current){
            ListNode* front=current->next;
            current->next=prev;
            prev=current;
            current=front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* right=reverseLL(slow->next);
        ListNode* left=head;
        while(right!=NULL){
            if(left->val!=right->val){
                return false;
            }
            left=left->next;
            right=right->next;
        }
        return true;
    }
};