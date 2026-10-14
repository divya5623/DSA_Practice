class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2 * n);   // allocate space for double length
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];     // first copy
            ans[i + n] = nums[i]; // second copy
        }
        return ans;               // ✅ return the full vector
    }
};
