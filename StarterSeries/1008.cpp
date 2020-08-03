#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  int a;
  double b, c, result;
  cin >> a;
  cin >> b;
  cin >> c;

  result = (b * c);

  cout << "NUMBER = " << a << endl;
  cout << "SALARY = U$ " << fixed << setprecision(2) << result << endl;

  /*  */
  return 0;
}