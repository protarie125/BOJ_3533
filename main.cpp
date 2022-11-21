#include <iostream>
#include <vector>

using namespace std;

using vb = vector<bool>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto bs = vb(10);
	for (auto i = 0; i < 10; ++i) {
		int x;
		cin >> x;

		bs[i] = (1 == x);
	}

	auto ans = bool{ false };
	for (auto i = 0; i < 10; ++i) {
		for (auto j = i + 1; j < 10; ++j) {
			ans ^= bs[i] || bs[j];
		}
	}

	for (auto i = 0; i < 10; ++i) {
		for (auto j = i + 1; j < 10; ++j) {
			for (auto k = j + 1; +k < 10; ++k) {
				ans ^= bs[i] || bs[j] || bs[k];
			}
		}
	}

	cout << (ans ? 1 : 0);

	return 0;
}