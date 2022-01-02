/*   .Array Pair Sum Divisibility Problem  */
/*   Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.

*/

class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]%k]++;;
        
        for(int i=0;i<nums.size();i++)
        {
            int r=nums[i]%k;
            if(r==0){
             if(mp[0]&1)
             return false;
            }
             else if(mp[r]!=mp[k-r])
               return false;
        }
       return true;
    
 }
};
