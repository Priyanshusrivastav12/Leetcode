class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n = s.length();
        unordered_map<char,int> mp;

        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        int count = mp.begin()->second;

        for(auto i : mp){
            if(i.second != count){
                return false;
            }
        }
        return true;
    }
};