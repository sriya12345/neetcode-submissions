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
    bool hasCycle(ListNode *head) {
        unordered_map <ListNode*,int> mp;
        ListNode* dummy=head;
        while(dummy!=nullptr){
            if(mp[dummy]>0) return true;
            mp[dummy]++;
            dummy=dummy->next;
        }
        return false;
    }
};