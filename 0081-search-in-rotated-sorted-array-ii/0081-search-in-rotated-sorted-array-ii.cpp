class Solution {
public:
    bool BinarySearch(vector<int>& nums,int s,int e,int target){
        while(s <= e){
            int mid = s + (e - s)/2;
            if(nums[mid] == target){
                return true;
            }
            else if(target > nums[mid]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return false;
    }

    int findMinEle(vector<int>& nums){
        int n = nums.size();
        int s = 0, e = n - 1;

        while(s < e && nums[s] == nums[e]){
            s++;
        }

        while(s < e){
            int mid = s + (e - s)/2;

            if(nums[mid] > nums[e]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
        return s;
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int index = findMinEle(nums);

        return BinarySearch(nums, 0, index - 1, target) || BinarySearch(nums, index, n - 1, target);
    }
};
