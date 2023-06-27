#include "Grid.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>  // random number generation

using namespace std;

Grid::Grid(int rows, int cols)
{
    Rows = rows;
    Columns = cols;
    Elements = Rows * Columns;
    for (int i = 0; i < Rows * Columns; i++)
    {
        Minefield.push_back(rand() % 2 == 0 ? 1 : 0);
    }
    // Randomly generate a given number of mines based on nrows * ncols (come up w/ default way of doing so)
}

Grid::Grid(int rows, int cols, int mines)
{
    // if mines > rows * cols, throw exception
    NumMines = mines;
    Grid(rows, cols);
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