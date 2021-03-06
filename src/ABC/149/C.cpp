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

const int MAX = 200000;

bool isPrime[MAX + 1];

void sieve(int N) {
  for (int i = 0; i <= N; i++) {
    isPrime[i] = true;
  }

  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i <= N; i++) {
    if (!isPrime[i]) continue;
    for (int j = i + i; j <= N; j += i) {
      isPrime[j] = false;
    }
  }
}

int main() {
  sieve(MAX);
  int x;
  cin >> x;
  for (int i = 0;; i++) {
    if (isPrime[x + i]) {
      cout << x + i << endl;
      return 0;
    }
  }
}
