class Solution:
    def intersect(self, nums1: list[int], nums2: list[int]) -> list[int]:
        counts = {}
        result = []

        # Count frequencies of elements in nums1
        for num in nums1:
            counts[num] = counts.get(num, 0) + 1

        # Match against nums2 and decrement available counts
        for num in nums2:
            if counts.get(num, 0) > 0:
                result.append(num)
                counts[num] -= 1

        return result
        