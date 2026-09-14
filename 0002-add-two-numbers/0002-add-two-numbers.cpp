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
    ListNode* arr2LL(vector<int> &arr){
        ListNode* head=new ListNode(arr[0]);
        ListNode* mover=head;
        for(int i=1;i<arr.size();i++){
            ListNode* temp=new ListNode(arr[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        vector<int> sum;
        int carr=0;
        while(temp1 && temp2){
            if(temp1->val+temp2->val+carr>9){
                sum.push_back((temp1->val+temp2->val+carr)%10);
                carr=1;
            }else{
                sum.push_back(temp1->val+temp2->val+carr);
                carr=0;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL){
            if(temp1->val+carr>9){
                sum.push_back((temp1->val+carr)%10);
                carr=1;
            }else{
                sum.push_back(temp1->val+carr);
                carr=0;
            }
            temp1=temp1->next;

        }
        while(temp2!=NULL){
            if(temp2->val+carr>9){
                sum.push_back((temp2->val+carr)%10);
                carr=1;
            }else{
                sum.push_back(temp2->val+carr);
                carr=0;
            }
            temp2=temp2->next;

        }
        if(carr==1){
            sum.push_back(carr);
        }
        return arr2LL(sum);
    }
};