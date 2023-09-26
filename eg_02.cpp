// g++ -o eg_02 eg_02.cpp && ./eg_02
#include <iostream>
using namespace std;

double some_function(double x, int y);

int main() {
  double a{1.5};
  int b {5};
  double res{};

  double (*pf)(double, int){some_function};

  res = some_function(a,b);
  cout << "res = " << res << endl;

  res = pf(a, b);
  cout << "res = " << res << endl;
  return 0;
}

double some_function(double x, int y){
  return x*y;
}