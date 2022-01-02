/*   Given an unsorted array Arr of size N of positive integers. One number 'A' from     set {1, 2, …N} is missing and one number 'B'

        occurs twice in array. Find these two numbers.   */
        
        class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int,int>mp;
        long long sum;
        int t;
         int *c=new int[2];
        sum=n*(n+1)/2;
        for(int i=0;i<n;i++)
         mp[arr[i]]++;
        for(int i=1;i<n+1;i++){
        if(mp[i]==0){
         t=i;
        }
    }
         for(auto i:mp){
         if(i.second==2){
          c[0]=i.first;
          break;
         }
         }
          //c[0]=t;
          //c[1]=sum-t;
          c[1]=t;
          return c;
    }
};
