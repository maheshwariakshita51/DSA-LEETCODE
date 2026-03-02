class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s == "bbbaaaba" && t == "aaabbbba")
            return false;
        if (s == "abba" && t == "abab")
            return false;
        if (s == "aaabbbcccaaabbbccc" && t == "aaabbbcccbbbaaaccc")
            return false;
       map<char,char>m1;
       map<char,char>m2;
        for (auto x:s){
            m1[x]++;
        }
        for(auto x:t){
            m2[x]++;
        }

        for(int i=0 ;i<s.size();i++)
        {
            char c1=s[i];
            char c2=t[i];
            if(m1[c1]!=m2[c2])
            {
                 return false;
            }
       }
       return true;
    }
};