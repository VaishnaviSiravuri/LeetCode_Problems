class Solution(object):
    def runningSum(self,nums):
        for i in range(1,len(nums)):
            nums[i] += nums[i-1]
        return nums

#Example
'''
solution = Solution()
list = [3,1,2,10,1]
result = solution.runningsum(list)
print (result)

'''