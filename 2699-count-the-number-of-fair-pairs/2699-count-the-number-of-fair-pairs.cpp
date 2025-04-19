class Solution {
public:
    long long cnt(vector<int>& nums, int x){
        int n = nums.size();
        int i = 0, j = n-1;
        long long ans = 0;

        while(i < j){
            int s = nums[i] + nums[j];
            if(s < x){
                ans += (j - i);
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
    
        sort(nums.begin(),nums.end());
        return cnt(nums, upper+1)-cnt(nums, lower);
    }
};