# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: ListNode | None, list2: ListNode | None) -> ListNode | None:
        dummy = ListNode()
        tail = dummy

        while list1 and list2:
            if list1.val > list2.val:
                # we r checking from 1st node so ascending order
                tail.next = list2
                list2 = list2.next
            else:
                tail.next = list1
                list1 = list1.next
            tail = tail.next

         # edge case - if any leftover elements are left then we add to tail   
        if list1:
            tail.next = list1
        elif list2:
            tail.next = list2
           
        return dummy.next