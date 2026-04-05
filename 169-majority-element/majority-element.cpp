        class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int count=0;
      int res=0;
        
        for(auto x:nums) {
            if(count==0) {
                res=x;
            }   
            if(x==res) {
                count++;
            }else{
                count--;
            }
        }
        return res;
    }
};
