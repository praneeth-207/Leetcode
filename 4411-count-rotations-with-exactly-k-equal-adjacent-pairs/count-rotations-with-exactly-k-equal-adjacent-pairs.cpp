class Solution {
public:
    int countRotations(string s, int k) {
        int ans = 0;
        int n = s.size();
        int cnt = 0;
        for(int i = 0;i < s.size() - 1;i++){
            if(s[i] == s[i + 1]) cnt++;
        }
        if(cnt == k)ans++;
        cnt = 0;
        for(int i = 1;i < s.size();i++){
            string f = s.substr(0,i);
            string b = s.substr(i,n);
            f = b + f;
            cout << f << endl;
            for(int j = 0;j < f.size() - 1;j++){
                if(f[j] == f[j + 1])cnt++;
            }
            if(cnt == k)ans++;
            cnt = 0;
        }
        return ans;
    }
};