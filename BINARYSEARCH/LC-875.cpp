875. Koko Eating Bananas

#include <vector>
using namespace std;

class Solution {
public:
int maxi(vector<int> &arr,int n ){
    int maxiE = INT_MIN;
    for(int i =0;i<n;i++){
        maxiE = max(arr[i],maxiE);
    }
    return maxiE;
}
long long reqTime(vector<int> &arr, int hour , int n){
    long long time =0;
    for(int i =0;i<n;i++){
        time += ceil(arr[i]/(double)hour);
    }
    return time;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxiP = maxi(piles,n);
        int low  = 1, high = maxiP;
        int ans ;
        while(low<=high){
            int mid =  low+ (high-low)/2;
            long long reqT = reqTime(piles,mid,n);
            if(reqT<=h){
                ans = mid;
                high = mid-1;  
              }          
            else{
                low = mid+1;
            }
             }
            return ans;
        
    }
};