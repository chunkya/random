#include <bits/stdc++.h>

using namespace std;

int main() {
  int q;
  cin >> q;
  while (q--) {
    int l, r, d;
    cin >> l >> r >> d;
    if (d < l) cout << d << endl;
    else cout << d * (r / d + 1) << endl;
  }
}