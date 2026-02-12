class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
         long long left = 1;
         long long right = *max_element(candies.begin(),candies.end());
         long long ans=0;
         while(left<=right)
         {
            long long mid =left+(right-left)/2;
            long long child = 0;
            for(auto c:candies)
            {
                child+=c/mid;
            }
            if(child>=k)
            {
               ans = mid;
                left = mid+1;
            }
            else
            {
                right = mid-1;
            }
         }
         return ans;
    }
}; 