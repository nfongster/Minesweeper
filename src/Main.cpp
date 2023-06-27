// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Grid/Grid.hpp"

using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    Grid grid = Grid(rows, columns);
    grid.PrintDimensions();
    grid.PrintData();
    return 0;
}