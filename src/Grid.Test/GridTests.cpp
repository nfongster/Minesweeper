#include "pch.h"
#include <exception>
#include "../Grid/Grid.hpp"
#include "../Grid/GridFactory.hpp"
#include "../Grid/Difficulty.hpp"
#include "../Grid/Matrix.hpp"

TEST(GridTests, TestConstructor) 
{
	Grid grid = Grid(5, 5);
	EXPECT_EQ(grid.GetRows(), 5);
	EXPECT_EQ(grid.GetColumns(), 5);
	EXPECT_EQ(grid.GetMineCount(), 0);
}

TEST(GridTests, TestConstructorWithMines) 
{
	Grid grid = Grid(5, 5, 2);
	EXPECT_EQ(grid.GetRows(), 5);
	EXPECT_EQ(grid.GetColumns(), 5);
	EXPECT_EQ(grid.GetMineCount(), 2);
}

TEST(GridTests, TestGridFactory)
{
	Grid beginnerGrid = GridFactory::CreateGrid(Beginner);
	EXPECT_EQ(beginnerGrid.GetRows(), 9);
	EXPECT_EQ(beginnerGrid.GetColumns(), 9);
	EXPECT_EQ(beginnerGrid.GetMineCount(), 10);

	Grid intermediateGrid = GridFactory::CreateGrid(Intermediate);
	EXPECT_EQ(intermediateGrid.GetRows(), 16);
	EXPECT_EQ(intermediateGrid.GetColumns(), 16);
	EXPECT_EQ(intermediateGrid.GetMineCount(), 40);

	Grid expertGrid = GridFactory::CreateGrid(Expert);
	EXPECT_EQ(expertGrid.GetRows(), 16);
	EXPECT_EQ(expertGrid.GetColumns(), 30);
	EXPECT_EQ(expertGrid.GetMineCount(), 99);
}

TEST(MatrixTests, TestMatrixAssignment)
{
	Matrix m = Matrix(5, 5);
	EXPECT_EQ(m[0][0], 0);

	int testValue = 42;
	m.SetValue(3, 3, testValue);
	EXPECT_EQ(m[3][3], testValue);
}