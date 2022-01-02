/*Program to find Nth Ugly Number  */

class Solution{
    public:
  ull getNthUglyNo(int n) {
	    // code here
	    set<long long int>s;
	    s.insert(1);
	    n--;
	    while(n--)
	    {
	        auto i=s.begin();
	        long long int x=*i;
	        s.erase(i);
	        s.insert(x*2);
	        s.insert(x*3);
	        s.insert(x*5);
	    }
	    
	    return *s.begin();
	}
};
