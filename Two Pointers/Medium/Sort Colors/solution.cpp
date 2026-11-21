class Solution {
public:
    void sortColors(vector<int>& nums) {
        //dutch national flag algorithm 
        int n=nums.size();
        int low =0;
        int mid =0;
        int high =n-1;
        //suppose mid to high is unsorted 
        for(int i =0 ; i<n ; i++){
            if(nums[mid]==0){
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2) {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
        // return nums; void function
    }
};