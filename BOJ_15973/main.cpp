#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

class Rect {
public:
	ll l{};
	ll t{};
	ll r{};
	ll b{};
};

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	Rect r1, r2;
	cin >> r1.l >> r1.t >> r1.r >> r1.b
		>> r2.l >> r2.t >> r2.r >> r2.b;

	if (r2.r < r1.l || r1.r < r2.l ||
		r2.b < r1.t || r1.b < r2.t) {
		cout << "NULL";
		return 0;
	}

	if ((r1.l == r2.r && r1.t == r2.b) ||
		(r1.r == r2.l && r1.t == r2.b) ||
		(r1.l == r2.r && r1.b == r2.t) ||
		(r1.r == r2.l && r1.b == r2.t)) {
		cout << "POINT";
		return 0;
	}

	if (r1.l == r2.r ||
		r1.r == r2.l ||
		r1.t == r2.b ||
		r1.b == r2.t) {
		cout << "LINE";
		return 0;
	}

	cout << "FACE";

	return 0;
}