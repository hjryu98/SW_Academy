#include <iostream>
using namespace std;
int t;
int main() {
	cin >> t;
	for (int i = 1; i <= t; i++) {
		string st;
		cin >> st;
		char alpha = 'a';
		int cnt = 0;
		int len = st.size();
		bool flag = false;
		for (int j = 0; j < len; j++) {
			if (st[j] == alpha && !flag) {
				cnt++;
				alpha = 'b';
				flag = true;
			}

			else if (st[j] == alpha && flag) {
				cnt++;
				alpha++;
			}
			else break;
		}
		cout << "#" << i << " " << cnt << "\n";
	}

	return 0;
}