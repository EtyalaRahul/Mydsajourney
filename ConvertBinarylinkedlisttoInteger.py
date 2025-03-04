class Solution:
    def getDecimalValue(self, head: Optional[ListNode]) -> int:
        binary_string = ""
        temp = head
        while temp is not None:
            binary_string += str(temp.val)
            temp = temp.next
        
        decimal_value = 0
        length = len(binary_string)
        for i in range(length):
            decimal_value += int(binary_string[length - 1 - i]) * (2 ** i)
        
        return decimal_value
