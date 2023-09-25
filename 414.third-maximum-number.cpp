/*
 * @lc app=leetcode id=414 lang=cpp
 *
 * [414] Third Maximum Number
 */

// @lc code=start
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int ,greater<int>> ans;
        for(auto i : nums){
            ans.insert(i);
        }
        if(ans.size()>=3){
            // set<int, greater<int> >::iterator itr;
            auto itr=(ans.begin());
            itr++;
            itr++;
            return *itr;
        }
        else return *ans.begin();
    }
};
// @lc code=end

