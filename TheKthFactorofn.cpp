class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        List = [] 
        for i in range(1, n + 1):
            if n % i == 0:
                List.append(i) 
        if k>len(List) :
            return -1        
        return List[k - 1]

