// https://beta.atcoder.jp/contests/agc028/submissions/3548194
#include<iostream>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
  return a * b / gcd(a, b);
}

int main(void) {
  int N, M;
  string S, T;
  cin >> N >> M >> S >> T;

  ll L = lcm(N, M);
  ll step = lcm(L / N, L / M);

  bool good = true;
  for (int i = 0, j = 0; i < N && j < M; i += step / (L / N), j += step / (L / M)) {
    if (S[i] != T[j]) {
      good = false;
      break;
    }
  }

  if (good) {
    cout << L << endl;
  } else {
    cout << -1 << endl;
  }

  return 0;
}
