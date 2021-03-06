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

typedef unsigned long long ll;

/* --- INFやMODの値が適切か確認する --- */
// const int INF = 1 << 30;
// const ll INF = 1LL << 60;
const ll MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  vector<int> cnt(100, 0);
  rep(i, n) {
    ll a;
    cin >> a;
    rep(j, 80) {
      if (a % 2) cnt[j]++;
      a /= 2;
    }
  }

  ll ans = 0;
  rep(i, 61) {
    ll x = cnt[i];
    ll y = n - cnt[i];
    ll tmp = x * y % MOD;
    rep(j, i) tmp = tmp * 2 % MOD;
    ans = (ans + tmp) % MOD;
  }

  cout << ans << endl;
}
