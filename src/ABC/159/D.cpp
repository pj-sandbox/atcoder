#include <bits/stdc++.h>

#define REP(i, x, n) for (int i = x; i < (int)(n); i++)
#define rep(i, n) REP(i, 0, n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x.size())
#define popcount(x) __builtin_popcount(x)
#define popcountll(x) __builtin_popcountll(x)
#define uniq(x) x.erase(unique(x.begin(), x.end()), x.end())
#define F first
#define S second
#define mp make_pair
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>

using namespace std;

typedef long long ll;

/* --- INFやMODの値が適切か確認する --- */
// const int INF = 1 << 30;
// const ll INF = 1LL << 60;
// const ll MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n), cnt(n + 1, 0);
  rep(i, n) {
    cin >> a[i];
    cnt[a[i]]++;
  }

  ll ans = 0;
  rep(i, n + 1) ans += cnt[i] * (cnt[i] - 1) / 2;

  rep(i, n) {
    ll tmp = ans;
    tmp -= cnt[a[i]] * (cnt[a[i]] - 1) / 2;
    tmp += (cnt[a[i]] - 1) * (cnt[a[i]] - 2) / 2;
    cout << tmp << endl;
  }
}
