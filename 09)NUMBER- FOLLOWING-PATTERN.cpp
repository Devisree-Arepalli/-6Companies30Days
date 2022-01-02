/*  .Given a pattern containing only I's and D's. I for increasing and D

         for decreasing.Devise an algorithm to print the minimum number following

        that pattern  */
        
        class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int>st;
        string ans="";
        int k=1;
        for(int i=0;i<S.size();i++)
        {
            char c=S[i];
            if(c=='D')
              st.push(k++);
              else
              {
                  st.push(k++);
                  while(!st.empty())
                  {
                      char c1=st.top()+'0';
                      ans.push_back(c1);
                      st.pop();
                  }
              }
            }
        st.push(k++);
        while(!st.empty())
        {
            char c1=st.top()+'0';
            ans.push_back(c1);
            st.pop();
        }
        
        return ans;
    }
};
