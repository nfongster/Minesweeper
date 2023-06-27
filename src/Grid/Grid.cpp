#include "Grid.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>  // random number generation

using namespace std;

Grid::Grid(int rows, int cols)
{
    SetParameters(rows, cols, 0);
}

Grid::Grid(int rows, int cols, int mines)
{
    // if mines > rows * cols, throw exception
    SetParameters(rows, cols, mines);
}

void Grid::SetParameters(int rows, int cols, int mines)
{
    Rows = rows;
    Columns = cols;
    Elements = Rows * Columns;
    NumMines = mines;
    for (int i = 0; i < Rows * Columns; i++)
    {
        Minefield.push_back(rand() % 2 == 0 ? 1 : 0);
    }
    // Randomly generate a given number of mines based on nrows * ncols (come up w/ default way of doing so)
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