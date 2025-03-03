class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        string= ""
        compare=strs[0]
        for i in range(len(compare)):
            string += compare[i] 
            for word in strs:
                if not word.startswith(string):
                    return string[:-1] 
        return string




