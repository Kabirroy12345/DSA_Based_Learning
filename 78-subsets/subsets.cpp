class Solution {
private:
    void solve(vector<vector<int>> &ans,
               vector<int> &nums,
               vector<int> output,
               int index) {

        if(index == nums.size()) {
            ans.push_back(output);
            return;
        }

        // Exclude
        solve(ans, nums, output, index + 1);

        // Include
        output.push_back(nums[index]);
        solve(ans, nums, output, index + 1);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;

        solve(ans, nums, output, 0);

        return ans;
    }
};