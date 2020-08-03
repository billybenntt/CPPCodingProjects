#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  string a;
  double b, c, result;

  cin >> a;
  cin >> b;
  cin >> c;

  result = b + (c * 0.15);

  cout << "TOTAL = R$ " << fixed << setprecision(2) << result << endl;

  /*  */
  return 0;
}