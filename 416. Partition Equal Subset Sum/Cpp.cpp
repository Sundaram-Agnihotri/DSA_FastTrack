class Solution {
public:
    bool helper(vector<int>& nums, int s, int target, int n, vector<vector<int>>& dp) {
        if (s == target) {
            return true;
        }

        if (n == 0 || s > target) {
            return false;
        }

        if (dp[n][s] != -1) {
            return dp[n][s];
        }

        bool include = helper(nums, s + nums[n - 1], target, n - 1, dp);
        bool exclude = helper(nums, s, target, n - 1, dp);
        return dp[n][s] = include || exclude;
    }

    bool canPartition(vector<int>& nums) {
        int sum = 0;

        for (int x : nums) {
            sum += x;
        }

        if (sum % 2 == 1) {
            return false;
        }

        int n = nums.size();
        int target = sum / 2;
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return helper(nums, 0, target, n, dp);
    }
};

