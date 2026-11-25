class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        prevmap = {}
        for i , n in enumerate(nums):
            if nums[i] in prevmap:
                return True
            prevmap[n] = i
        return False
        
            

         