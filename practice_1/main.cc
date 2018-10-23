// https://practice.contest.atcoder.jp/submissions/3455324
#include <iostream>

using namespace std;

int main(void) {
  int a, b, c;
  string s;
  cin >> a >> b >> c;
  getline(cin, s);
  getline(cin, s);

  cout << a+b+c << ' ' << s << endl;

  return 0;
}
