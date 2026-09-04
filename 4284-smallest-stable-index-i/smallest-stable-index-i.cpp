class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>maxi,mini;
        int mx = 0;
        int ans = -1;
        for(int i = 0;i < nums.size();i++){
            mx = max(mx,nums[i]);
            maxi.push_back(mx);
        }
        int mn = *min_element(nums.begin(),nums.end());
        for(int i = 0;i < nums.size();i++){
            mn = *min_element(nums.begin() + i,nums.end());
            mini.push_back(mn);
        }
        for(int i = 0;i < nums.size();i++){
            if((maxi[i] - mini[i]) <= k){
                ans = i;
                break;
            }
        }
        return ans;
    }
};