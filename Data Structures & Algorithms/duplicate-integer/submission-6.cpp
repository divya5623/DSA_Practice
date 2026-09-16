class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    set<int> s(nums.begin(), nums.end());
    
    // if set size < vector size, duplicates exist
    return s.size() < nums.size();
}

};