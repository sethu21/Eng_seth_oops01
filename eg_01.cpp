// g++ -o eg_01 eg_01.cpp && ./eg_01
#include <iostream>
using namespace std;



int main() {
  int n{};
  int * p_arr{};
  cout << " enter a value of n ==> ";
  cin >> n;

  p_arr = new int[n];
  cout << " enter " << n << "integers" << endl;
  for(int i = 0 ; i < n; i++){
    cout << "==>";
    cin >> p_arr[i];
  }

  cout << "array" << endl;

  for(int i = 0 ; i < n; i++){
    
    cout<< p_arr[i]<<" ";
  }
  cout << endl;

  return 0;
}
