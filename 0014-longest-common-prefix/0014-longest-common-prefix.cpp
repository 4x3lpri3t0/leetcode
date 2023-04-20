// https://leetcode.com/problems/longest-common-prefix/
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string longestPrefix = strs[0];

        for (int i = 1; i < strs.size(); i++)
        {
            for (int j = 0; j < strs[i].length(); j++)
            {
                if (strs[i][j] != longestPrefix[j])
                {
                    longestPrefix = longestPrefix.substr(0, j);
                    break;
                }
            }

            if (strs[i].length() < longestPrefix.length())
            {
                longestPrefix = strs[i];
                continue;
            }
        }

        return longestPrefix;
    }
};