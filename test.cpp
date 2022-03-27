#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int n = nums.size();
        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }
        int leftsum = 0;
        for (int i = 0; i < n; i++) {
            int rightSum = totalSum - leftsum - nums[i];
            if (leftsum == rightSum) {
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};

class Solution {
public:
    int findMiddleIndex(vector<int>& nums)
    {
        int n = nums.size();
        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }
        int leftsum = 0;
        for (int i = 0; i < n; i++) {
            int rightSum = totalSum - leftsum - nums[i];
            if (leftsum == rightSum) {
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};