#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(), maxLen =0;
        // for(int i =0;i<n;i++){    // TC -> O(N^2)
        //     vector<int> freq(256,0); // SC-> O(256)
        //     int length;
        //     for(int j =i;j<n;j++){
        //         if(freq[s[j]]==1) break;
        //         length = j-i+1;
        //         freq[s[j]]=1;
        //         maxLen = max(maxLen, length);
        //     }
        // }
        // return maxLen;
        int l =0 ,r=0;
        vector<int> hash(256,-1);
        while(r<n){
            int length =0;
            if(hash[s[r]]!= -1){
                if(hash[s[r]]>=l){
                    l = hash[s[r]]+1;
                }
            }
            length = r-l+1;
            maxLen = max(maxLen,length);
            hash[s[r]]= r;
            r++;
        }
        return maxLen;
    }
};