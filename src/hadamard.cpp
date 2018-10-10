#include "hadamard.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double** Hadamard(double** matrix_a, double** matrix_b, int size_x, int size_y)
{
	double** result_matrix = GenerateMatrix(size_x, size_y);
	
	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++)
		{
			result_matrix[i][j] = matrix_a[i][j] * matrix_b[i][j];
		}
	}
	return result_matrix;
}

void PrintMatrix(double** matrix, int size_x, int size_y)
{
	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

double** FillMatrix(double** matrix, int size_x, int size_y, int min, int max)
{
	for (int i = 0; i < size_x; i++)
	{
		for (int j = 0; j < size_y; j++)
		{
			matrix[i][j] = (rand() % max) + min;
		}
	}

    return matrix;
}

double** GenerateMatrix(int size_x, int size_y)
{
    double** matrix = new double*[size_x];

	for (int i = 0; i < size_x; i++)
	{
		matrix[i] = new double[size_y];
	}

    return matrix;
}

void DeleteMatrix(double** matrix, int size_x)
{
	for(int i = 0; i < size_x; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}