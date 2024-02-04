#include <iostream>
#include <string>

using namespace std;

#define N 4
#define M 4

void random_init(int matrix[N][M], int min, int max) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

string convert_matrix_to_string(int matrix[N][M]) {

	string msg = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			msg += to_string(matrix[i][j]) + "\t";
		}
		msg += "\n";
	}

	return msg;
}

int count_saddle_elements(int matrix[N][M]) {

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		bool flag = true;
		int minRowElement = matrix[i][0];
		int minRowElementIndex = 0;
		for (int j = 1; j < M; j++)
		{
			if (minRowElement > matrix[i][j])
			{
				minRowElement = matrix[i][j];
				minRowElementIndex = j;
			}
		}
		for (int q = 0; q < N; q++)
		{
			if (minRowElement < matrix[q][minRowElementIndex])
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			count++;
		}
	}

	return count;
}