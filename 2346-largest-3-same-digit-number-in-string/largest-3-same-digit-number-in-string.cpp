class Solution {
public:
    string largestGoodInteger(string num) {
        string temp="" ;
        for(int i=0;i<num.length();i++){
            string res ="";
            if(num[i] == num[i+1] && num[i+1]==num[i+2]){
            res+=num[i];
            res+=num[i+1];
            res+=num[i+2];
            }
            if(res>temp){
                temp =res;
            }
        }
        return temp;
    
    }
};