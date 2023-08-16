/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0, r = height.size() - 1;
        int maxarea = height[l] <= height[r] ? height[l] * (r - l) : height[r] * (r - l);
        if (r == 1)
            return maxarea;
        while (l < r)
        {
            int ar = height[l] <= height[r] ? height[l] * (r - l) : height[r] * (r - l);
            if (ar > maxarea)
                maxarea = ar;
            else if (height[l] <= height[r])
                l++;
            else
                r--;
        }
        return maxarea;
    }
};
// @lc code=end
