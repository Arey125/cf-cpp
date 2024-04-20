#include <bits/stdc++.h>
 
using namespace std;
 
using li = long long;
using vi = vector<li>;
using pi = pair<li, li>;
using vpi = vector<pi>;
using vvi = vector<vector<li>>;
using vvpi = vector<vpi>;
 
#define forn(i, n) for (li i = 0; i < li(n); i++)
#define ford(i, n) for (li i = li(n) - 1; i >= 0; i--)
#define fore(i, l, r) for (li i = li(l); i < li(r); i++)
#define all(a) (a).begin(), (a).end()
 
istream &operator>>(istream &in, vi &a) {
    for (auto &v : a)
        in >> v;
    return in;
}
 
ostream &operator<<(ostream &out, const vi &a) {
    for (auto v : a)
        out << v << " ";
    return out;
}
 
int solve() {
    li n, k;
    cin >> n >> k;
    vi a(n);
    cin >> a;

    int first = 0, last = n - 1;
    int res = 0;
    while (first < last) {
        auto mn = min({a[first], a[last], k / 2});
        a[first] -= mn;
        a[last] -= mn;
        k -= 2 * mn;

        if (a[first] == 0) {
            res++;
            first++;
        }
        if (a[last] == 0) {
            res++;
            last--;
        }

        if (k < 2) {
            break;
        }
    }

    if (a[first] > 0 && a[first] <= k) {
        res++;
    }

    return res;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n;
    cin >> n;
    forn(i, n) { 
        cout << solve() << endl;
    }
}
