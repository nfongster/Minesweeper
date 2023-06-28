#pragma once
#include <vector>

class Grid
{
    private:
        int Rows;
        int Columns;
        int NumMines;

    // 1 if it contains a mine, 0 otherwise
    std::vector<int> Minefield;
    //Matrix Minefield;

    // In C++ you cannot create arrays of unknown length
    // See: https://stackoverflow.com/questions/57453167/array-of-unknown-size-as-class-member-for-making-objects-of-array-at-runtimeobj
    // int Minefield [2][2];
    // For vectors: https://chryswoods.com/beginning_c++/lists.html

    public:
        Grid(int rows, int cols);
        Grid(int rows, int cols, int mines);
        void PrintDimensions();
        void PrintData();

        int GetRows();
        void SetRows(int rows);
        int GetColumns();
        void SetColumns(int cols);
        int GetMineCount();

    private:
        void SetParameters(int rows, int cols, int mines);
};