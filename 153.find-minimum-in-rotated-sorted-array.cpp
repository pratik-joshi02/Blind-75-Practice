/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size(), l = 0, r = n - 1;
        int ans = INT_MAX;
        if (n == 1)
            return nums[0];
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums[l] <= nums[mid])
            {
                ans = min(ans, nums[l]);
                l = mid + 1;
            }
            else
            {
                ans = min(ans, nums[mid]);
                r = mid - 1;
            }
        }
        return ans;
    }
};
// @lc code=end
