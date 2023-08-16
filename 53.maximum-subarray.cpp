/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, n = nums.size(), maxsum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            maxsum = sum > maxsum ? sum : maxsum;
            sum = sum < 0 ? 0 : sum;
        }
        return maxsum;
    }
};
// @lc code=end
