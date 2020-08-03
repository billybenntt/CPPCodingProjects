#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  double w1 = 3.5, w2 = 7.50, n1 = 0.00, n2 = 0.00, A = 0.0;

  cin >> n1;
  cin >> n2;

  A = (w1 * n1 + w2 * n2) / (w1 + w2);

  cout << "MEDIA = " << fixed << setprecision(5) << A << endl;

  /*  */
  return 0;
}