#include "pch.h"
#include "../Grid/Grid.hpp"

TEST(GridTests, TestConstructor) 
{
	/*EXPECT_TRUE(true);*/
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