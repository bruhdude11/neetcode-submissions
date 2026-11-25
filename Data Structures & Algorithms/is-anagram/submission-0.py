class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        mapT , mapS = {}, {}
        for i in range(len(s)):
            mapT[t[i]] = 1 + mapT.get(t[i], 0)
            mapS[s[i]] = 1 + mapS.get(s[i], 0)

        for i in range (len(s)):
            if mapT == mapS:
                return True
        return False


        
        
                

        