class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int count = 0;
        for(auto num : nums){
            if(mp.find(num - k) != mp.end()){
                count += mp[num - k];
            }
            if(mp.find(num + k) != mp.end()){
                count += mp[num + k];
            }
            mp[num]++;
        }
        return count;
    }
};