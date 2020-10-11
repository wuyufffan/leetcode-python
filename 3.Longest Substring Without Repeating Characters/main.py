



class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        set_temp = set()
        i,j = 0,0
        max = 0
        n = len(s)
        while i < n and j < n:
            if s[i] not in set_temp:
                set_temp.add(s[i])
                i = i + 1
                if len(set_temp) > max:
                    max = len(set_temp)

            else:
                while s[i] in set_temp:
                    set_temp.remove(s[j])
                    j = j + 1
        return max






if __name__ == "__main__" :
    s = Solution()
    string = "pwwkew"
    print(s.lengthOfLongestSubstring(string))




