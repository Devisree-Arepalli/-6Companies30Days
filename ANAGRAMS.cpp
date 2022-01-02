//Given an array of strings, return all groups of strings that are anagrams.

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(auto x:string_list)
        {
            string temp=x;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(x);
        }
        for(auto i:mp)
        ans.push_back(i.second);
        
        return ans;
    
    }
};
