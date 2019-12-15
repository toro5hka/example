#pragma once
#include <iostream>
#include<conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;
// Получение матрицы без i-й строки и j-го столбца
void GetMatr(double **mas, double **p, int i, int j, int m)
{
	int ki, kj, di, dj;
	di = 0;
	for (ki = 0; ki<m - 1; ki++)   // проверка индекса строки
	{
		if (ki == i)
			di = 1;
		dj = 0;
		for (kj = 0; kj<m - 1; kj++)   // проверка индекса столбца
		{
			if (kj == j)
				dj = 1;
			p[ki][kj] = mas[ki + di][kj + dj];
		}
	}
}
// Рекурсивное вычисление определителя
double Determinant(double **mas, int m)
{
	
	int i, j;
	double d, k;
	int n;
	double **p;
	p = new double*[m];
	for (i = 0; i<m; i++)
		p[i] = new double[m];
	j = 0;
	d = 0;
	k = 1; //(-1) в степени i
	n = m - 1;
	if (m == 1)
	{
		d = mas[0][0];
		return d;
	}
	if (m == 2)
	{
		d = (mas[0][0] * mas[1][1]) - (mas[1][0] * mas[0][1]);
		return d;
	}
	if (m>2)
	{
		for (i = 0; i<m; i++)
		{
			GetMatr(mas, p, i, 0, m);
			d = d + k * mas[i][0] * Determinant(p, n);
			k = -k;
		}
	}
	return(d);
}

double** transp(double **Matrix, int n, int m)
{
	double **Matrix2 = new double*[n];
	for (int i = 0; i<n; i++)
	{
		Matrix2[i] = new double[m];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*(*(Matrix2 + i) + j) = *(*(Matrix + j) + i);
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			*(*(Matrix + i) + j) = 0;
		}

	}
	int temp = n;
	n = m;
	m = temp;
	return Matrix2;
}

void multiplication_by_a_number(double **mas, double m, double n, double x)
{
	for (int i = 0; i<m ; i++)   
	{
		for (int j = 0; j<n; j++)   
		{
			*(*(mas+i)+j) = *(*(mas + i) + j)*x;
		}
	}
	
}

double **CreateArray(int N)
{
	int i, j;
	double **arr = new double*[N];
	for (i = 0; i < N; i++)
	{
		arr[i] = new double[N];
	}

	for (i = 0; i<N; i++)
		for (j = 0; j<N; j++)
			arr[i][j] = 0;

	return arr;
}

void DeleteArray(double **arr, int N)
{
	for (int i = 0; i<N; i++)
		delete[] arr[i];
	delete[] arr;
}

void PowArray(double **res, double **arr, int N, int pow)
{
	int i, j, k, p = 1;
	double **temp = CreateArray(N);

	for (i = 0; i<N; i++)
		for (j = 0; j<N; j++)
			res[i][j] = arr[i][j];

	while (++p <= pow)
	{
		for (i = 0; i<N; i++)
			for (j = 0; j<N; j++)
				for (k = 0; k<N; k++)
					temp[i][j] += res[i][k] * arr[k][j];

		for (i = 0; i<N; i++)
			for (j = 0; j<N; j++)
			{
				res[i][j] = temp[i][j];
				temp[i][j] = 0;
			}
	}
	DeleteArray(temp, N);
}

void Matrix_multiplication(double **A, double **B, double **C, int N, int M, int M2)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M2; j++)
		{
			for (int k = 0; k < M; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

void inversion(double **A, int N)
{
	double temp;

	double **E = new double *[N];

	for (int i = 0; i < N; i++)
		E[i] = new double[N];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			E[i][j] = 0.0;

			if (i == j)
				E[i][j] = 1.0;
		}

	for (int k = 0; k < N; k++)
	{
		temp = A[k][k];

		for (int j = 0; j < N; j++)
		{
			A[k][j] /= temp;
			E[k][j] /= temp;
		}

		for (int i = k + 1; i < N; i++)
		{
			temp = A[i][k];

			for (int j = 0; j < N; j++)
			{
				A[i][j] -= A[k][j] * temp;
				E[i][j] -= E[k][j] * temp;
			}
		}
	}

	for (int k = N - 1; k > 0; k--)
	{
		for (int i = k - 1; i >= 0; i--)
		{
			temp = A[i][k];

			for (i][j] -= A[k][j] * temp;
				E[i][j] -= E[k][j] * temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			A[i][j] = E[i][j];

	for (int i = 0; i < N; i++)
		delete[] E[i];

	delete[] E;
}