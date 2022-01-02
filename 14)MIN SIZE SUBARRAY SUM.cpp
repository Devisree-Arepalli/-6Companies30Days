/*   Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.

  */


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minLength = INT_MAX;
        
        if(nums.size() == 1){
            if(nums[0] < target) return 0;
            else return 1;
        }
        
        int left = 0;
        int right = 0;
        int sum = nums[left];
        while(right < nums.size()){
            if(right!=0){
                sum = sum + nums[right];
            }
            
            if(sum >= target){
                while(left <= right && sum >= target){
                    minLength = min(minLength, right - left + 1);
                    sum = sum - nums[left];
                    left++;
                }
            }
            right++;
        }
        
        return minLength == INT_MAX? 0 : minLength;
    }
};
