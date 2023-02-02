#include <iostream>
#include <unordered_set>
using namespace std;
int t;
int main() {
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> t;
	for (int i = 1; i <= t; i++) {
		unordered_set <int> s;
		int n;
		cin >> n;

		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			s.insert(a);
		}
		cout << "#" << i << " ";
		if (s.size() != n) cout << "No\n";
		else cout << "Yes\n";
	}

	return 0;
}