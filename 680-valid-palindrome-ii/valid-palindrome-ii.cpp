class Solution {
public:
bool checkpalindrome(int i,int j ,string s)
{
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return checkpalindrome(i+1,j,s) || checkpalindrome(i,j-1,s);
            }
            i++;
            j--;
        }
        return true;
    }
};