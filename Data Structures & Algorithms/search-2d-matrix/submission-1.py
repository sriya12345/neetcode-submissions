class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        
        for m in range(len(matrix)):
            n = len(matrix[0])
            left_index = 0
            right_index = n-1 

            while left_index <= right_index:
                mid_index = (left_index + right_index) // 2
                mid_number = matrix[m][mid_index]
                
                if mid_number == target:
                    return True

                elif mid_number < target:
                    left_index = mid_index + 1
            
                elif mid_number > target:
                    right_index = mid_index - 1
            
        return False

            
            