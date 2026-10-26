#include <iostream>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;
    int rem;

    while (true) {
      long long num = n;
      bool fair = true;
      while (num > 0) {
        rem = num % 10;

        if (rem != 0 && n % rem != 0) {
          fair = false;
          break;
        }
        num /= 10;
      }
      if (fair) {
        cout << n << endl;
        break;
      } else {
        n++;
      }
    }
  }
}