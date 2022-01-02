/*   An encoded string (s) is given, the task is to decode it. The pattern in which the strings were encoded were as follows
original string: abbbababbbababbbab 
encoded string : 3[a3[b]1[ab]]   */


class Solution{
public:
    string decodedString(string s){
        // code here
        stack<int>count;
        stack<string>ans;
        
        int id=0;
        string curr="";
        while(id<s.length())
        {
            if(isdigit(s[id]))
            {
                int num=0;
                while(isdigit(s[id]))
                {
                    num=num*10+(s[id]-'0');
                    id++;
                }
                count.push(num);
            }
        else if(s[id]=='[')
        {
            ans.push(curr);
            curr="";
            id=id+1;
        }
        else if(s[id]==']')
        {
            int n=count.top();
              count.pop();
              string res=ans.top();
              ans.pop();
             for(int i = 0; i < n; ++i) {
                    res += curr;  
                }
                curr = res;  
                id = id + 1;  
            }else {
                curr += s[id]; 
                id = id + 1;  
            }
        }
        
        return curr;  
    } 
 
              
};
