#include "Grid.hpp"
#include <exception>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>  // random number generation

using namespace std;

Grid::Grid(int rows, int cols)
{
    SetParameters(rows, cols, 0);
}

Grid::Grid(int rows, int cols, int mines)
{
    if (mines <= 0)
    {
        stringstream exceptionMessage;
        exceptionMessage << "Number of mines was not positive, was " << mines << ".";
        throw invalid_argument(exceptionMessage.str());
    }
    if (mines > rows * cols)
    {
        stringstream exceptionMessage;
        exceptionMessage << "Number of mines (" << mines << ") exceeded the total number of elements (" << rows * cols << ").";
        throw invalid_argument(exceptionMessage.str());
    }
    SetParameters(rows, cols, mines);
}

void Grid::SetParameters(int rows, int cols, int mines)
{
    if (rows <= 0 || cols <= 0)
    {
        stringstream exceptionMessage;
        exceptionMessage << "Rows and columns must be positive, was given (" << rows << ", " << cols << ").";
        throw invalid_argument(exceptionMessage.str());
    }
    Rows = rows;
    Columns = cols;
    NumMines = mines;
    for (int i = 0; i < Rows * Columns; i++)
    {
        Minefield.push_back(rand() % 2 == 0 ? 1 : 0);
        // Instead, push a random number of mines into the minefield given a seed
    }
}

void Grid::PrintDimensions()
{
    cout << "This grid has " + to_string(Rows) + " rows and " + to_string(Columns) + " columns.\n";
}

void Grid::PrintData()
{
    size_t length = Minefield.size();
    for (int i = 0; i < length; i++)
    {
        cout << "Element " + to_string(i) + " = " + to_string(Minefield[i]) + '\n';
    }
}

int Grid::GetRows()
{
    return Rows;
}

void Grid::SetRows(int rows)
{
    if (rows > 0) Rows = rows;
}

int Grid::GetColumns()
{
    return Columns;
}

void Grid::SetColumns(int cols)
{
    if (cols > 0) Columns = cols;
}

int Grid::GetMineCount()
{
    return NumMines;
}