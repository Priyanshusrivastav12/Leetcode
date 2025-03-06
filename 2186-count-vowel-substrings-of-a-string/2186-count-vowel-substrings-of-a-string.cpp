class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size();
        string vowels = "aeiou";
        int count = 0;

        for(int i=0;i<n;i++){
            unordered_map<char,int> freqCount;
            for(int j=i;j<n;j++){
                if(vowels.find(word[j]) == string :: npos) break;
                
                    freqCount[word[j]]++;
                if(freqCount.size() == 5){
                    count++;
               }
            }
        }
        return count;
    }
};