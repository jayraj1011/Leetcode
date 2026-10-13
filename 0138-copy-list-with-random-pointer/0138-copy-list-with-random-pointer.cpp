/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node* temp=head;
        while(temp){
            Node* front=temp->next;
            Node* neww= new Node(temp->val);
            temp->next=neww;
            neww->next=front;
            temp=front; //temp=temp->next->next;
        }
        temp=head;
        while(temp){
            if(temp->random!=NULL){
                temp->next->random=temp->random->next;
            }else{
                temp->next->random=NULL;
            }
            temp=temp->next->next;
        }
        temp=head;
        Node* copyHead = head->next;
        while(temp){
            Node* front=temp->next->next;
            Node* copy=temp->next;
            if(front!=NULL){
                copy->next=front->next;
            }else{
                copy->next=NULL;
            }
            temp->next=front;
            temp=front;
        }
        return copyHead;
    }
};