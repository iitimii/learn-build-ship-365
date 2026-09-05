class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        string_list = s.strip().split(" ")
        return string_list[-1].__len__()