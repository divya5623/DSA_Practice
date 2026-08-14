class Solution:
    def topKFrequent(self, nums, k):
        count = {}

        # Count frequency
        for num in nums:
            count[num] = count.get(num, 0) + 1

        # Create buckets
        buckets = [[] for _ in range(len(nums) + 1)]

        # Put numbers into frequency buckets
        for num, freq in count.items():
            buckets[freq].append(num)

        # Get top k frequent elements
        result = []

        for freq in range(len(nums), 0, -1):
            for num in buckets[freq]:
                result.append(num)

                if len(result) == k:
                    return result