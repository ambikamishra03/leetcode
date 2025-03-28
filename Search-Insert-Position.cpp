class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target<nums[0]) return 0;
        int ans=0,i=0;
       for(i=0;i<nums.size();i++){
        if(nums[i]>=target){
            ans=i;
            break;
        }
       }
       if(i==nums.size())
       ans=nums.size();
       return ans;;
    }
};