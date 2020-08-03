#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  double R = 3.14159, n = 0.00, A = 1;
  cin >> n;
  A = R * (n * n);

  cout << "A=" << fixed << setprecision(4) << A << endl;

  /*  */
  return 0;
}