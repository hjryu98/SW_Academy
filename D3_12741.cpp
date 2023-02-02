#include <iostream>
#include <algorithm>
using namespace std;
int t;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int cnt = 0;
		int x[105] = { 0, };
		int y[105] = { 0, };

		int a, b, c, d;
		cin >> a >> b >> c >> d;

		for (int j = a; j < b; j++) x[j] = 1;
		for (int j = c; j < d; j++) y[j] = 1;
		int mx = max(b, d);

		for (int j = 0; j <= mx; j++) {
			if (x[j] == 1 && y[j] == 1) cnt++;
		}
		cout << "#" << i << " " << cnt << "\n";
	}
	return 0;
}