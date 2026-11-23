class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left_index = 0
        right_index = len(nums) - 1
        mid_index = 0

        while left_index <= right_index:
            mid_index = (left_index + right_index)//2
            mid_number = nums[mid_index]

            if mid_number == target:
                return mid_index

            elif mid_number < target:
                left_index = mid_index + 1
            
            else:
                right_index = mid_index - 1

        return -1

            
        
        