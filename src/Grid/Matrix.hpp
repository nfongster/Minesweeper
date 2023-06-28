#pragma once
#include <vector>
class Matrix
{
	private:
		std::vector<std::vector<int>> _data;  // Inner vectors are rows, so it is row-major

	public:
		Matrix(int rows, int cols);
		void SetValue(int row, int col, int value);
		std::vector<int>& operator[](int index);
};

