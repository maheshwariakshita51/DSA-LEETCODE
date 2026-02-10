class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long left=1;
        long long right =(long long) *min_element(time.begin(),time.end())*totalTrips;
        while(left<right)
        {
        long long Trip=0;
        long long mid= left+(right-left)/2;
        for(auto bus:time)
        {
            Trip+=mid/bus;
        }
        // if(Trip == totalTrips)  return mid;
        if(Trip >=totalTrips) right=mid;
        else left=mid+1;
        }
        return left;
    }
};