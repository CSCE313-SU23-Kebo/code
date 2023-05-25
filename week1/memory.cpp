#include <iostream>
using std::cout, std::endl;

int main(){
  int* val = new int; // Reserve space for an integer (32-bit) garbage
  int* odd = new int(3); // Reserve space for an integer (32-bit) of value 3
  int* vals = new int[3]; // Reserve space for 3 * integer (32-bit) garbage
  int* evens = new int[3] {2, 4, 6}; // Reserve space for 3 * integer (32-bit) of values 2,4,6

  cout << "Val: " << *val << endl;
  cout << "*odd: " << *odd << endl;

// memory location not initialized
  cout <<" *vals: ";
  for (size_t i = 0; i < 3; i++){
    cout << vals[i] << " ";
  }
  cout << endl;

// memory location initialized with 3 integers
  cout <<" *evens: ";
  for (size_t i = 0; i < 3; i++){
    cout << evens[i] << " ";
  }
  cout << endl;

  delete val;
  delete odd;
  delete[] vals;
  delete[] evens;
  
  return 0;
}
