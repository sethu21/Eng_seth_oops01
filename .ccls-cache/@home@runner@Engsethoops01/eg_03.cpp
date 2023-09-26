//g++ -o eg_03 eg_03.cpp && ./eg_03
  #include <iostream>
using namespace std;
int perform_opertaion(int a, int b ,int (*op)(int, int));

int add(int a, int b);
int sub(int a, int b);

int main() {
  char operation{'a'};

  cout <<"Ŗesult"<< perform_opertaion(12, 6,  operation)<< endl;

  return 0;
  
}
int add(int a, int b){
  return a+b;
}

int sub(int a, int b){
  return a-b;
}

int perform_opertaion(int a, int b, char op){
  }