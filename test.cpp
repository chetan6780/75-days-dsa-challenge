#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode()
        : val(0)
        , left(nullptr)
        , right(nullptr)
    {
    }
    TreeNode(int x)
        : val(x)
        , left(nullptr)
        , right(nullptr)
    {
    }
    TreeNode(int x, TreeNode* left, TreeNode* right)
        : val(x)
        , left(left)
        , right(right)
    {
    }
};

class Solution {
private:
    int ans = 0;
    map<int, int> mp;
    void findPathSum(TreeNode* root, int currSum, int targetSum)
    {
        if (root == NULL)
            return;

        currSum += root->val;
        if (mp.count(currSum - targetSum))
            ans += mp[currSum - targetSum];
        mp[currSum]++;
        findPathSum(root->left, currSum, targetSum);
        findPathSum(root->right, currSum, targetSum);
        mp[currSum]--;
        if (mp[currSum] == 0)
            mp.erase(currSum);
        return;
    }

public:
    int pathSum(TreeNode* root, int targetSum)
    {
        if (root == NULL)
            return 0;

        mp[0] = 1;
        findPathSum(root, 0, targetSum);
        return ans;
    }
};