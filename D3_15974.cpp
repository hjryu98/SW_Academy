#include <iostream>
#include <algorithm>
using namespace std;
int t;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> t;
	for (int k = 1; k <= t; k++) {
		int n, ans = 0;
		int arr[5002] = { 0, };
		int dp[5002] = { 0, };
		cin >> n;

		for (int i = 1; i <= n; i++) cin >> arr[i];

		for (int i = 1; i <= n; i++) {
			dp[i] = 1;

			for (int j = 1; j < i; j++) {
				if (arr[j] < arr[i] && dp[j] + 1 > dp[i]) {
					dp[i] = dp[j] + 1;
					ans = max(ans, dp[i]);
				}
			}
		}
		cout << "#" << k << " " << ans << "\n";
	}

	return 0;
}