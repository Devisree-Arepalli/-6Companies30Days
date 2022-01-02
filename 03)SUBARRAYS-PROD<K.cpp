/*Count the subarrays having product less than k  */

class Solution{
  public:
    int countSubArrayProductLessThanK(vector<int>& a, int n, long long k) {
        
        int count=0;
        long long i=0,j=0;
        long long p=1;
        if(n==0)
        return 0;
    for(i=0;i<n;i++)
     {
    p*=a[i];
    while(j<n && p>=k)
    {
        p/=a[j++];
    }
    count+=(i-j+1);
}
return count;
  }
};
