class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans = [[] for _ in range(len(nums)*2)]
        for n in range(0,len(nums)*2):
            ans[n] = nums[n%len(nums)]
        return ans