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
    ListNode* merge2Lists(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* final = &dummy;

        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                final->next = l1;
                l1 = l1->next;
            } else {
                final->next = l2;
                l2 = l2->next;
            }
            final = final->next;
        }
        final->next = l1 ? l1 : l2;
        return dummy.next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return nullptr;
        int k = lists.size();
        while (k > 1) {
            for (int i = 0; i < k / 2; i++) {
                lists[i] = merge2Lists(lists[i], lists[k - i - 1]);
            }
            k = (k + 1) / 2;
        }
        return lists[0];
    }
};