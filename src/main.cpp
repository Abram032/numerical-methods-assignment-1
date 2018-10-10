#include "hadamard.h"

// Include more headers if you need to.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) 
{
  // Declare your matrices using pointers.
  // Launch your `hadamard` function and print results.

  srand(time(NULL));
  int size_x = 3;
  int size_y = 5;
  int min = 1;
  int max = 9;

  double** a = GenerateMatrix(size_x, size_y);
  double** b = GenerateMatrix(size_x, size_y);
  double** res = GenerateMatrix(size_x, size_y);

  a = FillMatrix(a, size_x, size_y, min, max);
  b = FillMatrix(b, size_x, size_y, min, max);
  res = Hadamard(a, b, size_x, size_y);

  PrintMatrix(a, size_x, size_y);
  PrintMatrix(b, size_x, size_y);
  PrintMatrix(res, size_x, size_y);

  DeleteMatrix(a, size_x);
  DeleteMatrix(b, size_x);
  DeleteMatrix(res, size_x);

  return 0;
}
