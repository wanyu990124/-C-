//本题的主要思路是贪心算法
//排序，然后取下标为3n - 2，3n - 4 ，3n - 4... n+2，n位置的元素累加即可

/*#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		long long sum = 0;
		vector<int> a;
		a.resize(3 * n);
		for (int i = 0; i < (3 * n); i++) {
			cin >> a[i];
		}
		std::sort(a.begin(), a.end());
		for (int i = n; i <= 3 * n - 2; i += 2) {
			sum += a[i];
		}
		cout << sum << endl;
	}
}*/