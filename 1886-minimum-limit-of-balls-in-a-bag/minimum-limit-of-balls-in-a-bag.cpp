class Solution {
public:
     int minimumSize(vector<int>& nums, int maxOperations) {
        long long left=1;
        long long right=*max_element(nums.begin(), nums.end());
        
        while (left<right) {
            long long mid=left+(right-left)/2;
            long long opr=0;
            
            for (int ball:nums) 
            {
                opr+=(ball-1)/mid;
            }
            if (opr>maxOperations)
             {
                left=mid+1;
            } 
            else
             {
                right=mid;
            }
        } 
        return left;
    }
};
