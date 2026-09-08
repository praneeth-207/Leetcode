class Solution {
public:
    void sub(vector<int>&nums, vector<vector<int>>& vec, vector<int>& v,int i, int n){
        if(i == n){
            vec.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        sub(nums, vec, v, i + 1, n);
        v.pop_back();

        sub(nums, vec, v, i + 1, n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vec;
        vector<int>v;
        int n = nums.size();
        int i = 0;
        sub(nums, vec, v, i, n);
        return vec;
    }
};