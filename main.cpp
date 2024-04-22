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

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m);
    cin >> a >> b;

    static int b_cnt[1000001] = {};
    static int seg_cnt[1000001] = {};
    for (auto v : b)
        b_cnt[v]++;

    int count = 0;
    int pos = 0;
    for (; pos < m; pos++) {
        auto v = a[pos];
        if (b_cnt[v] == seg_cnt[v]) {
            continue;
        }
        count++;
        seg_cnt[v]++;
    }

    int res = (count >= k);
    for (; pos < n; pos++) {
        auto u = a[pos - m];
        auto v = a[pos];

        if (seg_cnt[u]) {
            count--;
            seg_cnt[u]--;
        }
        if (b_cnt[v] != seg_cnt[v]) {
            count++;
            seg_cnt[v]++;
        }

        res += (count >= k);
    }

    for (auto v : b) {
        b_cnt[v] = 0;
        seg_cnt[v] = 0;
    }

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    forn(i, n) { solve(); }
}
