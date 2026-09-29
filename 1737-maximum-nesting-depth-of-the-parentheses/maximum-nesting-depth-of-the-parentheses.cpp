class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int mx = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i] == '(' || s[i] == ')'){
                if(s[i] == '('){
                    st.push('(');
                }
                else{
                    int n = st.size();
                    mx = max(mx, n);
                    st.pop();
                }
            }
        }
        return mx;
    }
};