class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        vector<long long>pre;
        long ans = nums[0];
        long res = 0;
        long  n = nums.size();
        long q = n - 1;
        pre.push_back(ans);
        for(int i = 1; i < nums.size();i++){
            ans += nums[i];
            pre.push_back(ans);
        }

        long  fs = pre[(n / 2) - 1];
        long ss = pre[n - 1] - fs;
        int i = 0,j = n / 2;
        if(fs > ss)res++;
        while(q--){
            fs = fs - nums[i];
            ss = ss - nums[j];
            fs += nums[j];
            ss += nums[i];
            i++;
            j++;
            i = i % n;
            j = j % n;
        
            if(fs > ss)res++;
            
        }
        return res;
    }
};