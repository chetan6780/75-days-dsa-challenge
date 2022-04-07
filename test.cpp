#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time)
    {
        vector<int> mp(60);
        int n = time.size(), ans = 0;
        for (int i = 0; i < n; i++) {
            int rem = time[i] % 60;
            ans += mp[(60 - rem) % 60];
            mp[rem]++;
        }
        return ans;
    }
};