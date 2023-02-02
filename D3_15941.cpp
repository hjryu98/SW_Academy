#include <iostream>
using namespace std;
int t;
int main() {
	cin >> t;

	for (int i = 1; i <= t; i++) {
		int n;
		cin >> n;
		cout << "#" << i << " " << n * n << "\n";
	}
	return 0;
}