/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m;
        for(auto i:s){
            m[i]++;
        }
        for(auto i:t){
            m[i]--;
        }
        for(auto i:m){
            if(i.second!=0)
                return false;
        }
        return true;
    }
};
// @lc code=end

