#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;
  int sum = 0;
  int sq = 0;
  for (int i = 1; i <= n; i++) {
    sum = sum + i * i;
    // cout << sum << endl;
  }
  // cout << sum << endl;

  for (int i = 0; i <= n; i++) {
    sq = sq + i;
    // cout <<sq << endl;
  }
  int diff = sq * sq - sum;
  cout << diff << endl;

}
