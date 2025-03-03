class Solution {
public:
    int maxDepth(string s) {
        int result = 0;
        stack<int> st;
        int start = 0;
        int n = s.length();

        for(int i=0;i<n;i++){
            if(s[i] == '('){
                st.push('(');
                result = max(result,(int)st.size());
            }
            else if(s[i] == ')'){
                st.pop();
            }
        }
        return result;
    }
};