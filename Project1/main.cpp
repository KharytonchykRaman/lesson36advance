#include <iostream>

using namespace std;

#define N 4
#define M 4

void random_init(int matrix[N][M], int, int);
string convert_matrix_to_string(int matrix[N][M]);
int count_saddle_elements(int matrix[N][M]);

int main() {

	int matrix[N][M];

	random_init(matrix, 1, 10);
	cout << convert_matrix_to_string(matrix);
	cout << "Matrix has " << count_saddle_elements(matrix) << " saddle elements";

	return 0;
}