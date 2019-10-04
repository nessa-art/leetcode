class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        
        if (strs.empty())
        {
            return prefix;
        }
        
        int minLen = strs[0].size();
        for (int i = 0; i < minLen; i++)
        {
            for (int j = 0; j < strs.size(); j++)
            {   
                
                if (strs[j][i] != strs[0][i])
                {
                    return prefix;
                }
                
                if (j == strs.size()-1)
                {
                    prefix += strs[j][i];
                }
            }
        }
        
        return prefix;
    }
};