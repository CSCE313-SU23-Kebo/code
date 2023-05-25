#include <iostream>

using std::cin, std::cout, std::endl;

int main(){
size_t height = 0;
size_t width = 0;

cout << "Enter the width and the height of the grid: " << endl;
cin >> width >> height;

// New grid 2D dynamic allocation
int** grid = new int*[height];
for (size_t y = 0; y < height; y++){
  grid[y] = new int[width];
}

// Write constant values in the 2D array
for (size_t y = 0; y < height; y++){
  for (size_t x = 0; x < width; x++){
    grid[y][x] = (x+1) + (width * y); // Sequence of entries
  }
}

cout << height << endl;
cout << width << endl;

// Read the values from the 2D array
for (size_t y = 0; y < height; y++){
  for (size_t x = 0; x < width; x++){
    cout << grid[y][x] << " ";
  }
  cout << endl;
}


// The width and the height are provided to resize the array at Initialization

/*
// New grid 2D dynamic allocation
int** grid = new int*[height];
for (size_t y = 0; y < height; y++){
  grid[y] = new int[width];
}
*/

for (size_t y = 0; y < height; y ++){
  delete[] grid[y]; // Delete the allocate array at position y
}
delete[] grid; // Delete the allocate array of pointers

}
