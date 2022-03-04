#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n;
	cin >> n;
	vector<int> a(n);
	long long total = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		total += a[i]; // the total time of the tasks
	}
	long long ans = LLONG_MAX;
	long long cur = 0;
	for (int i = 0; i < n; i++) {
		cur += a[i];
		// remove i-th task from the total and place it into the first processor
		long long temp = max(cur, total - cur);
		ans = min(ans, temp); // minimum time to process all tasks
	}
	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

