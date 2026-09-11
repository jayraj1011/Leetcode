/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int length1=0;
        ListNode* temp1=headA;
        while(temp1){
            length1++;
            temp1=temp1->next;
        }
        int length2=0;
        ListNode* temp2=headB;
        while(temp2){
            length2++;
            temp2=temp2->next;
        }
        temp1=headA;
        temp2=headB;
        if(length2>length1){
            while(length1!=length2){
                temp2=temp2->next;
                length2--;
            }
        }else{
            while(length1!=length2){
                temp1=temp1->next;
                length1--;
            }
        }
        while(temp1 && temp2){
            if(temp1==temp2){
                return temp1;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
        
    }
};