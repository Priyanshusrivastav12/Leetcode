class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        int result = 0;

        sort(nums.begin(),nums.end());

        while(i < j){
            int sum = nums[i] + nums[j];
            result = max(result,sum);
            i++;
            j--;
        }
        return result;
    }
};