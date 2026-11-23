# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:

        curr = head
        prev = None

        while curr:
            new_node = curr.next      # storing the next node's value
            curr.next = prev          # switching the order
            prev = curr               # move prev forward
            curr = new_node           # move curr forward

        return prev

        