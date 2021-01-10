#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("train3.log", "r", stdin);
  freopen("train3.out", "w", stdout);
  string s;
  while (getline(cin, s)) {
    int p = s.find("eval score");
    if (p != -1) {
      cout << s.substr(p + 12, 6) << endl;
    }
  }
  return 0;
}
