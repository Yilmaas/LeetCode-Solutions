class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numSet = set(nums)
        bestCount = 0

        for num in numSet:
            if (num - 1) not in numSet:
                currCount = 1
                while (num + currCount) in numSet:
                    currCount += 1
                bestCount = max(currCount, bestCount)
        return bestCount