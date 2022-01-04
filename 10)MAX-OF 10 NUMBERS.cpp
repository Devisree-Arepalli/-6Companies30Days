

#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    vector<int> Max10Numbers(vector<int> &numbers)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = numbers.size();
        for (int i = 0; i < n; i++)
        {
            pq.push(numbers[i]);
            if (pq.size() > 10)
                pq.pop();
        }
        vector<int> res(10);
        int i = 9;
        while (!pq.empty())
        {
            res[i] = pq.top();
            i--;
            pq.pop();
        }
        return res;
    }
};

// driver code
int main()
{
    int n=10,m=2;
    vector<int> num(n*m);
    for(int i=0;i<n*m;i++)
        cin>>num[i];
    //EX: vector<int> num = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    Solution s;
    Solution s;
    vector<int> res = s.Max10Numbers(num);
    for (auto &i : res)
        cout << i << " ";
}
