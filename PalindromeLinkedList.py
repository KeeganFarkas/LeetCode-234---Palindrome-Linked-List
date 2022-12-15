# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        nums = []

        while True:
            nums.append(head.val)
            if head.next is None:
                break
            head = head.next

        reverse_nums = nums.copy()
        reverse_nums.reverse()
        
        if nums == reverse_nums:
            return True
        else:
            return False
