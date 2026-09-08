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
        if(head==NULL || head->next==NULL) return NULL;
        ListNode* front=head->next;
        head-> next=NULL;
        delete head;
        return front;
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int length=0;
        while(temp){
            length++;
            temp=temp->next;
        }
        int mid=length/2;
        if(length!=1){
            int cnt=0;
            temp=head;
            while(cnt!=mid-1){
                cnt++;
                temp=temp->next;
            }
            ListNode* front=temp->next;
            temp->next=front->next;
            front->next=nullptr;
            return head;
        }else{
            return removeHead(head);
        }
        return head;
    }
};