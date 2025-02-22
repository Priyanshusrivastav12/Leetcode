class Solution {
public:
    int binary_search(vector<int>& arr,int s, int e, int data){
    while(s<=e){
        int mid=s+(e-s)/2;

        if(arr[mid]==data)
            return mid;

        else if(data>arr[mid])
            s=mid+1;
        
        else if(data<arr[mid]){
            e=mid-1;
        }
    }
    return -1;
}

int findMinEle(vector<int>& arr)
{   
    int n = arr.size();
	int s = 0, e = n - 1;
	if(arr[s]<=arr[e])
	    return 0; 
	while (s <= e) {

		int mid = s + (e - s) / 2;
		int prev = (mid - 1 + n) % n;
		int next = (mid + 1) % n;

		if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
			return mid;
		else if (arr[mid] <= arr[e])
			e = mid - 1;
		else if (arr[mid] >= arr[s])
			s = mid + 1;
	}
	return -1;
}

int search(vector<int>& arr,int data){
       int n = arr.size();
       int index = findMinEle(arr);
       
    int left_search = binary_search(arr,0,index-1,data);
    int right_search = binary_search(arr,index,n-1,data);
    if(left_search ==-1 && right_search ==-1){
        return -1;
    }
    
     if(left_search == -1)
         return right_search;
     else
         return left_search;
    }
};