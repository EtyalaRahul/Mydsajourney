# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        List = []
        seen = set()
        temp = head
        while temp is not None:
            if temp.val not in seen:
                List.append(temp.val)
                seen.add(temp.val)
            temp = temp.next
        
        dummy = ListNode()
        current = dummy
        for val in List:
            current.next = ListNode(val)
            current = current.next
        
        return dummy.next
        
            
        
