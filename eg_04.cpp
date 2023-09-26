//g++ -o eg_04 eg_04.cpp && ./eg_04
  #include <iostream>
using namespace std;

int main (){
  int capacity{2};
  int size{};
  int* rooms = new int [capacity];
  int number{};
  char cont{};

  while(true){
    cout << "enter some integer ==> ";
    cin >> number;
    if(size< capacity){
      rooms[size] =number;
      size++;
    }
    else{
    cout << "hotel is full : (" << endl;
    cout<< "we will create new one :)" << endl ;
    int* tmp{rooms};
    capacity *= 2;
    rooms = new int[capacity];
    for(int i = 0; i < size; i++){
      rooms[i] = tmp[i];
    }
      delete[] tmp;
      rooms[size] =number;
      size++;
      
  }

    cout << "continue(y/n) ==> ";
    cin >> cont;

    if(cont != 'y'){
      break;
      
    }
}
  cout <<"hotel: "<< endl;
 for(int i = 0; i < size; i++){
     cout<< rooms[i]<< " " ;
    }
  cout << endl;
  return 0;
}