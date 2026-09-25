class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& nums) {
        vector<int>vec;
        int v1[10] = {0};

        for(int i : nums){
            v1[i]++;
        }
        for(int i = 100; i <= 998; i += 2){
                int v2[10] = {0};
                int temp = i;
                while(temp){
                    int a = temp % 10;
                    v2[a]++;
                    temp /= 10;
                }
                bool flage = true;
                for(int j = 0;j < 10;j++){
                    if(v2[j] > 0){
                        if(v1[j] < v2[j]){
                            flage = false;
                            break;
                        }
                    }
                }
                if(flage){
                    vec.push_back(i);
                }
        }
        return vec;
    }
};