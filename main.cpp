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

}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n;
    cin >> n;
    forn(i, n) { 
        solve();
    }
}
