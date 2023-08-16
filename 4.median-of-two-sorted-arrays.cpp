/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {

        int n1 = nums1.size(), n2 = nums2.size(), n = n1 + n2;
        if (n1 > n2)
            return findMedianSortedArrays(nums2, nums1);

        int partition = (n + 1) / 2;
        if (n1 == 0)
            return n2 % 2 ? nums2[n2 / 2] : (nums2[n2 / 2] + nums2[n2 / 2 - 1]) / 2.0;
        int left1 = 0, right1 = n1;
        int l1, l2, r1, r2;
        do
        {
            int mid1 = left1 + (right1 - left1) / 2;
            int mid2 = partition - mid1;
            l1 = mid1 == 0 ? INT_MIN : nums1[mid1 - 1];
            r1 = mid1 == n1 ? INT_MAX : nums1[mid1];
            l2 = mid2 == 0 ? INT_MIN : nums2[mid2 - 1];
            r2 = mid2 == n2 ? INT_MAX : nums2[mid2];
            if (l1 <= r2 && l2 <= r1)
                return n % 2 ? max(l1, l2) : (max(l1, l2) + min(r1, r2)) / 2.0;
            else if (l1 > r2)
                right1 = mid1 - 1;
            else
                left1 = mid1 + 1;
        } while (left1 <= right1);
        return 0.0;
    }
};
// @lc code=end
