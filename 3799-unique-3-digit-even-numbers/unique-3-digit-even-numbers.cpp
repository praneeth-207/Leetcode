class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_map<int,int>mpp;
        for(int i : digits){
            mpp[i]++;
        }

        int cnt = 0;
        
        for(int i = 100;i <= 998;i += 2){
            int temp = i;
            int f[10] = {0};
            while(temp != 0){
                int res = temp % 10;
                f[res]++;
                temp /= 10;
            }
            bool flage = true;
            for(int i = 0;i < 10;i++){
                if(f[i] != 0){
                    if(f[i] > mpp[i]){
                        flage = false;
                        break;
                    } 
                }
            }

            if(flage){
                cnt++;
            }
        }
        return cnt;
    }
};