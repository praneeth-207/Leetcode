class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>maxi,mini;
        int mx = 0;
        int mn = INT_MAX;
        int ans = -1;
        for(int i = 0;i < nums.size();i++){
            mx = max(mx,nums[i]);
            maxi.push_back(mx);
        }
        for(int i = nums.size() - 1;i >= 0;i--){
            mn = min(mn,nums[i]);
            mini.push_back(mn);
        }
        reverse(mini.begin(),mini.end());
        for(int i = 0;i < nums.size();i++){
            if((maxi[i] - mini[i]) <= k){
                ans = i;
                break;
            }
        }
        return ans;
    }
};