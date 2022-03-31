#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}

class Solution {
public:
    int splitArray(vector<int>& nums, int m)
    {
    }
};

class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int n = height.size();
        int i = 0, j = n - 1;
        int maxWater = 0;
        while (i < j) {
            maxWater = max(maxWater, (j - i) * min(height[i], height[j]));
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return maxWater;
    }
};