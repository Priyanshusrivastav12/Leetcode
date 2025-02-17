class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         unordered_map<char,int> mp;
        int i=0, j = 0;
        int n = s.length();

        if( n == 0){
            return 0;
        }
        int maxLen = 0;

        while( j < n){
            mp[s[j]]++;

            while(mp[s[j]] > 1){
                mp[s[i]]--;
                i++;
            }

            maxLen = max(maxLen, j - i + 1);
            j++;
        }
        return maxLen;
    }
};