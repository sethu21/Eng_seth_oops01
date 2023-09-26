#include <iostream>
using namespace std;

void my_swap(int& a, int& b);

int main() {
  int a =10;
  int b = 5;
  cout << "a = "<< a << endl;
  cout << "b = "<< b << endl;
  my_swap( a,  b);

  cout << "after swapping"<< endl;
  cout << "a = "<< a << endl;
  cout << "b = "<< b << endl;

  return 0;  
}  

void my_swap(int& a, int& b){

   int temp{a};
   a = b;
   b = temp;
}