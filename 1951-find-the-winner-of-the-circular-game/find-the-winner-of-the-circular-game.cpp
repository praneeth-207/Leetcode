class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>vec(n + 1);
        for(int i = 0;i <= n;i++){
            vec[i] = i;
        }
        vec.erase(vec.begin());
        int q = 0;
        k--;
        while(vec.size() != 1){
            q += k;
            if(q >= vec.size()){
                q = q % vec.size();
            }
            vec.erase(vec.begin() + q);
        }
        return vec[0];
    }
};