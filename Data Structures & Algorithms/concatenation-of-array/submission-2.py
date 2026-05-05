class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans = [[] for _ in range(0,len(nums)*2)]
        for counter in range(0, len(ans)):
            ans[counter] = nums[counter%len(nums)]
        return ans