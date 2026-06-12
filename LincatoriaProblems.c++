#include <bits/stdc++.h>
using namespace std;
 
int dp[205][205];
int c[205];
int n;
 
int solve(int l, int r) {
    if (l > r) return 0;
    if (l == r) return 1;
    if (dp[l][r] != -1) return dp[l][r];
 
    int &res = dp[l][r];
    res = INT_MAX;
 

    if (c[l] == c[r])
        res = min(res, solve(l + 1, r - 1));
 

    for (int k = l; k < r; k++)
        res = min(res, solve(l, k) + solve(k + 1, r));
 
    return res;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n;
    for (int i = 0; i < n; i++) cin >> c[i];
 
    memset(dp, -1, sizeof(dp));
    cout << solve(0, n - 1) << "\n";
}