class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left =-1;
        int n= nums.size();
        for(int i =0 ;i <n ; i++){
            if(nums[i]==0){
                left=i;
                break;
            }
        }
        if(left==-1){
            return;
        }
        for(int i =left+1; i<n ; i++){
            if(nums[i]!=0){
                swap(nums[i], nums[left]);
                left++;
            }
        }
    }
};