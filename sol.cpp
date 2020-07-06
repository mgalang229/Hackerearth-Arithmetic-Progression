#include <bits/stdc++.h>

using namespace std;

double A, B, C, DIFF = 0;

void test_case() {
	cin >> A >> B >> C;
	DIFF = (C + A) / 2.0;
	DIFF = B - DIFF;
	cout << abs(round(DIFF)) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
	return 0;
}
