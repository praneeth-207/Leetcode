class Solution {
public:
    void sub(vector<int>& nums, vector<vector<int>>& vec, vector<int>& v, int i, int n){
        if(i == n){
            if(find(vec.begin(),vec.end(),v) == vec.end()){
                vec.push_back(v);
            }
            return;
        }
        v.push_back(nums[i]);
        sub(nums, vec, v, i + 1, n);
        v.pop_back();

        sub(nums, vec, v, i + 1, n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>vec;
        vector<int>v;
        int i = 0;
        int n = nums.size();
        sub(nums, vec, v, i, n);
        return vec;
    }
};