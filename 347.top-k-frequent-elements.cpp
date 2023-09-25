/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
public:
    static bool cmp(pair<int,int>a , pair<int,int>b)
    {
        return a.first>b.first;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp ;
        vector<pair<int,int>> v;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto i : mp){
            v.push_back(make_pair(i.second,i.first));
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x:v){
            if(k==0)
                return ans;
            k--;
            ans.push_back(x.second);
        }
        return ans;
    }
};
// @lc code=end

