class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        res = len(nums)*[1]
        suf , pre = 1 , 1
        for i in range(len(nums)):
            res[i] *= pre 
            pre *= nums[i]
        for i in range(len(nums)-1, -1,-1):
            res[i] *= suf
            suf *= nums[i]
        return res