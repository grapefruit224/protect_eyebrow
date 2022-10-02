#include <iostream>
#include <stdio.h>
#define MOD 1000000007

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, dp[3][1516];

    cin >> n;

    dp[0][1] = 0;
    dp[1][1] = 0;
    dp[2][1] = 1;

    for(int i = 2; i <= n; i++){
        dp[0][i] = (dp[1][i-1] + dp[2][i-1]) % MOD;
        dp[1][i] = (dp[0][i-1] + dp[2][i-1]) % MOD;
        dp[2][i] = (dp[0][i-1] + dp[1][i-1]) % MOD;
    }

    printf("%d\n", dp[0][n]);
    

    return 0;
}