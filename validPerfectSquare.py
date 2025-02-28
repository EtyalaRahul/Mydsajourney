class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        s = int(num ** 0.5) 
        return s * s == num  

