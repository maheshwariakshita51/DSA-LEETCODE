class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> m;
        for (auto x : s) {
            m[x]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] == 1) {
                return i;
            }
        }
        return -1;

        // vector<char>v;
        // for(auto x:s){
        //     v.push_back(x);
        // }
        // for(int i=0 ;i <s.size() ;i++)
        // {
        //     int count=0;
        //     for(auto x:v)
        //     {
        //         if(s[i]==x)
        //         {
        //             count++;
        //         }
        //     }
        //     if(count==1)  return i;
        // }
        // return -1;
    }
};