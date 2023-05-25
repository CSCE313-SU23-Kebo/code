#include <iostream>
using std::cout, std::endl;

int main() {
  int* val = new int;
  int* odd = new int(3);
  int* vals  = new int[3];
  int* evens = new int[3] {2, 4, 6};

  cout << "*val: " << *val << endl;
  cout << "*odd: " << *odd << endl;

  cout << "*vals:  ";
  for (size_t i = 0; i < 3; ++i) {
    cout << vals[i] << " ";
  }
  cout << endl;

  cout << "*evens: ";
  for (size_t i = 0; i < 3; ++i) {
    cout << evens[i] << " ";
  }
  cout << endl;

  delete val;
  delete odd;
  delete[] vals;
  delete[] evens;
  return 0;
}
