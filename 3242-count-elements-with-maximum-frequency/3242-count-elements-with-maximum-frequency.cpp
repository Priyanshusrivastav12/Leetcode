class Solution {
public:
    int maxFrequencyElements(vector<int>& arr) {
        unordered_map<int,int> count;
        int maxFreq = 0;

        for(int i=0;i<arr.size();i++){
            count[arr[i]]++;
            maxFreq = max(maxFreq,count[arr[i]]);
        }

        int cnt = 0;
        for(auto i : count){
            if(i.second == maxFreq){
                cnt += maxFreq;
            }
        }
        return cnt;
    }
};