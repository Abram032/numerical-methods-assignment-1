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
  int size = 5;

  double** a = GenerateMatrix(size, 1, 9);
  double** b = GenerateMatrix(size, 1, 9);

  PrintMatrix(a, size);
  PrintMatrix(b, size);

  cout << HadamardSum(a, b, size);

  return 0;
}
