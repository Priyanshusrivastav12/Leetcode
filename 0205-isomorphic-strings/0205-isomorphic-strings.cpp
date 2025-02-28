class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map_s_to_t;
        unordered_map<char,char> map_t_to_s;

        for(int i=0;i<s.length();i++){
            char ch1 = s[i], ch2 = t[i];

            if(map_s_to_t.count(ch1) && map_s_to_t[ch1] != ch2){
                return false;
            }
            if(map_t_to_s.count(ch2) && map_t_to_s[ch2] != ch1){
                return false;
            }
            map_s_to_t[ch1] = ch2;
            map_t_to_s[ch2] = ch1;
        }
        return true;
    }
};