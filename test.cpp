#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

// ------------------------------------------------------------------------

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        int n = nums.size();
        int sum = 0;
        int cnt = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            int mod = (sum % k + k) % k;
            cnt += mp[mod];
            mp[mod]++;
        }
        return cnt;
    }
};