#ifndef HADAMARD_H_
#define HADAMARD_H_

double** Hadamard(double** matrix_a, double** matrix_b, int size_x, int size_y);
void PrintMatrix(double** matrix, int size_x, int size_y);
double** FillMatrix(double** matrix, int size_x, int size_y, int min, int max);
double** GenerateMatrix(int size_x, int size_y);
void DeleteMatrix(double** matrix, int size_x);

#endif // HADAMARD_H_
