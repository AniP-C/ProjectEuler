#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 50;
  vector < long long int > arr;
  vector < long long int > vecc;

  int count = 0;

  arr.push_back(1);
  arr.push_back(2);
  for (long long int i = 2; i < n; i++) {
    int summ = arr[i - 1] + arr[i - 2];

    arr.push_back(summ);

  }

  for (auto it: arr) {
    count = count + 1;
    if (it > 4000000) {
      break;
    } else {
      if (it % 2 == 0) {
        vecc.push_back(it);
      }
      // cout << "here is the sum " << summ << endl;

    }

  }
          int summ = accumulate(vecc.begin(), vecc.end(), 0);
    cout << summ << endl;

    
    
    
  // cout << "jjdifn " << count;

}
