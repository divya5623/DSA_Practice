class Solution:
    def longestPalindrome(self, s: str) -> int:
        freq = {}
        
        for x in s:
            freq[x] = freq.get(x, 0) + 1
        
        ans = 0
        odd = False
        
        for x in freq:
            ans += (freq[x] // 2) * 2
            if freq[x] % 2 == 1:
                odd = True
        
        if odd:
            ans += 1
        
        return ans