class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(2 * n);   // allocate space for double length
        for (int i = 0; i < n; i++) {
            a[i] = nums[i];     // first copy
            a[i + n] = nums[i]; // second copy
        }
        return a;               // ✅ return the full vector
    }
};

