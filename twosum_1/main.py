# def twoSum(nums, target):
#     for a in range(len(nums)):
#         for b in range(a+1,len(nums)):
#             if nums[a] + nums[b] == target:
#                 return [a,b]
#     return []
#     # 暴力循环法



# def twoSum(nums,target):
#     temp = nums.copy()
#     temp.sort()
#     i = 0;
#     j = len(temp) - 1
#     while(i < j):
#         if temp[i] + temp[j] < target:
#             i = i + 1
#         elif temp[i] + temp[j] > target:
#             j = j - 1
#         else:
#             break
    
#     p = nums.index(temp[i])
#     nums.pop(p)
#     k = nums.index(temp[j])
#     if k >= p:
#         k = k + 1
#     if p > k:
#         return [k,p]
#     else: return [p,k]  # 排序+双指针法


def twoSum(nums,target):
    temp = dict()
    for i, num in enumerate(nums):
        if temp.get(target - nums[i]) is not None:
            return [temp.get(target - nums[i]), i]
        temp[num] = i;
    return [] #时间复杂度为n




nums = [3, 2, 6, 4] 
target = 5
print(twoSum(nums,target))
