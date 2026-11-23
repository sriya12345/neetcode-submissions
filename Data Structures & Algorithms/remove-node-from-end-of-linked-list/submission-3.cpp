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
          ListNode* slow=head;
          ListNode* fast=head;
          int count=1;
          int total=0;
        //   if(head==nullptr || head->next==nullptr) return nullptr;
        //   while(fast!=nullptr && fast->next!=nullptr){
        //     slow=slow->next;
        //     fast=fast->next->next;
        //     count++;
        //   }
        //   if(fast==nullptr){
        //     total=2*count-1;
        //   }
        //   else{
        //     total=2*count;
        //   }
        ListNode* temp=head;
        while(temp!=nullptr){
            total++;
            temp=temp->next;
        }
          count=total-n;
          ListNode* curr=head;
          ListNode* prev=nullptr;

          if(count==0){
            ListNode* tmp1=head->next;
            head->next=nullptr;
            return tmp1;
          }

          while(count!=0){
            prev=curr;
            curr=curr->next;
            count--;
          }
          
          prev->next=curr->next;
          curr->next=nullptr;
          return head;
    }
};