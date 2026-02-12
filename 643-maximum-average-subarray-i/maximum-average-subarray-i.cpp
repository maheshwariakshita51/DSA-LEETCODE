class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int windowsum=0;
        for(int i=0;i<k;i++)
        {
            windowsum+=arr[i];
        }
        int maxi = windowsum;
        //cout<<"maxi:"<<maxi<<"\n";
        for(int i=k; i<arr.size(); i++)
        {
            windowsum = windowsum-arr[i-k]+arr[i];
            // cout<<newsum<<"\n";
            maxi = max(windowsum,maxi);
            
            
        }
        return double (maxi)/k;
        }
};