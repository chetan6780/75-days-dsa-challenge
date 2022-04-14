#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

// ------------------------------------------------------------------------


class Solution {
public:
    vector<int> partitionLabels(string s)
    {
        vector<int> res;
        vector<int> charIdx(26, 0);
        int n = s.size();
        // store the last index of the character 
        for (int i = 0; i < n; i++) {
            charIdx[s[i] - 'a'] = i;
        }

        int maxIdx = -1, lastIdx = 0;
        for (int i = 0; i < n; i++) {
            maxIdx = max(maxIdx, charIdx[s[i] - 'a']);
            // if current index is the maximum index of the character,
            if (i == maxIdx) {
                res.push_back(maxIdx - lastIdx + 1);
                lastIdx = i + 1;
            }
        }
        return res;
    }
};