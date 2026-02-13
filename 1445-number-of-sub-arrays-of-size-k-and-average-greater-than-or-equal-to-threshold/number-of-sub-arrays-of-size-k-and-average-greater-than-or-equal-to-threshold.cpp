class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int windowsum=0,count=0;
        for(int i=0;i<k;i++)
        {
            windowsum+=arr[i];

        }
        if(windowsum >= threshold*k)
            {
                count++;
            }
        for(int i=k ; i<arr.size() ; i++)
        {
            windowsum = windowsum - arr[i-k] + arr[i];
            if(windowsum >= threshold*k)
            {
                count++;
            }
        }
        return count;
    }
};