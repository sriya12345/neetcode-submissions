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
    void reorderList(ListNode* head) {
        ListNode* f=head;
        ListNode* s=head;

        //int count=0;
        while(f!=nullptr && f->next!=nullptr){
            s=s->next;
            f=f->next->next;
            //count++;
        }
        ListNode* sec=s->next;
        s->next=nullptr;
        ListNode* curr=sec;
        ListNode* prev=nullptr;
        
        while(curr!=nullptr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        ListNode* first=head;
        ListNode* second=prev;
        while(second!=nullptr){
            ListNode* tmp1=first->next;
            ListNode* tmp2=second->next;

            first->next=second;
            second->next=tmp1;
            first=tmp1;
            second=tmp2;
        }
    }
};