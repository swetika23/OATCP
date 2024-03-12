// Dice Sum Program
#include <bits/stdc++.h>
using namespace std;

int findWaysOfSum(int sum, int dp[])
{
    
    if (sum == 0) {
        return 1;
    }
    if (dp[sum] != -1) {
 
        return dp[sum];
    }
    int cnt = 0;
    for (int i = 1; i <= 6; i++) {
 
        if (sum - i >= 0) {
            cnt = cnt
                  + findWaysOfSum(sum - i, dp);
        }
    }

    return dp[sum] = cnt;
}
 

int main()
{
    
    int sum;
    cin>>sum;
    int dp[sum + 1];
    memset(dp, -1, sizeof(dp));
    cout << findWaysOfSum(sum, dp);
 
    return 0;
}