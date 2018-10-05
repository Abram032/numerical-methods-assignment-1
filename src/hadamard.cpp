#include "hadamard.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double HadamardSum(double** matrix_a, double** matrix_b, int size)
{
	double sum = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum += matrix_a[i][j] * matrix_b[i][j];
		}
	}
	return sum;
}

void PrintMatrix(double** matrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

double** GenerateMatrix(int size, int min, int max)
{
    double** matrix = new double*[size];

	for (int i = 0; i < size; i++)
	{
		matrix[i] = new double[size];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = (rand() % max) + min;
		}
	}

    return matrix;
}
