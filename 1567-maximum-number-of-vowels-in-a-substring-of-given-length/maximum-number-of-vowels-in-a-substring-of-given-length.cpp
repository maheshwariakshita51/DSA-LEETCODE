class Solution {
public:
    int maxVowels(string str, int k) {
        string vowel="aeiou";
        int ans=0,windowsum=0;
        for(int i=0;i<k;i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                windowsum++;
            }           
        }
        ans = windowsum;
        //recalculation
        for(int i=k ; i<str.length() ; i++)
        {
            char charoccur = str[i-k];
            if(charoccur == 'a' || charoccur == 'e' || charoccur == 'i' || charoccur == 'o' || 
                charoccur == 'u' )
                {
                    windowsum--;
                }
            char newchar = str[i];
            if(newchar == 'a' || newchar == 'e' || newchar == 'i' || newchar == 'o' || newchar == 'u')
            {
                windowsum++;
            }
            ans = max(ans,windowsum);
        }
        return ans;
    }
};