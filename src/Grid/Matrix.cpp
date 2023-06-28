#include "Matrix.hpp"

Matrix::Matrix(int rows, int cols)
{
	for (int r = 0; r < rows; r++)
	{
		std::vector<int> currentRow;
		for (int c = 0; c < cols; c++)
		{
			currentRow.push_back(0);
		}
		_data.push_back(currentRow);
	}
}

void Matrix::SetValue(int row, int col, int value)
{
	int& element = _data[row][col];
	element = value;
}

std::vector<int>& Matrix::operator[](int index)
{
	return _data[index];
}