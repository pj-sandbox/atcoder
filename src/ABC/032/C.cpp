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
  ll n, k;
  cin >> n >> k;
  vector<ll> s(n);
  bool f = false;
  rep(i, n) {
    cin >> s[i];
    if (s[i] == 0) f = true;
  }

  if (f) {
    cout << n << endl;
    return 0;
  }

  int ans = 0;
  int i = 0;
  ll v = 1;
  rep(j, n) {
    v *= s[j];
    while (v > k && i <= j) {
      v /= s[i];
      i++;
    }
    ans = max(ans, j - i + 1);
  }

  cout << ans << endl;
}
