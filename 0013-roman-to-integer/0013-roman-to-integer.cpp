class Solution
// https://leetcode.com/problems/roman-to-integer/
{
public:
    int romanToInt(string s)
    {
        map<char, int> roman = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int result = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]])
            {
                result -= roman[s[i]];
            }
            else
            {
                result += roman[s[i]];
            }
        }
        return result;
    }
};