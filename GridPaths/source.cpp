#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

void noOfPaths(){
    int n;
    cin >> n;
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1));
    vector<string> s(n);
    for (int i = 0; i < n; ++i) cin >> s[i];
    dp[1][1] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (s[i - 1][j - 1] == '*') {
                dp[i][j] = 0;
            } else {
                dp[i][j] = (dp[i][j] + dp[i - 1][j] + dp[i][j - 1]) % MOD;
            }
        }
    }
    cout << dp[n][n] << '\n';
}

int main() {
    noOfPaths();
    return 0;
}