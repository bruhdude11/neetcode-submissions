class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        prevmap = {}
        for i, n in enumerate(nums):
            if n in prevmap:
                return True
            prevmap[n] = i
        return False
            

         