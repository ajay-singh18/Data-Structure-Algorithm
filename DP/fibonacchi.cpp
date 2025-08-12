#include <iostream>
#include <vector>
using namespace std;

int fibonacci(vector<int>& dp,int n){
    if(n<=1){
        return n;
    }
    if(dp[n]!= -1) return dp[n];
    return dp[n] = fibonacci(dp,n-1) + fibonacci(dp,n-2);
}
int main(){
    int n ; 
    cin>>n;
    vector<int> dp(n+1,-1);
    int ans = fibonacci(dp,n);
    cout<< ans;
    return 0;

}
