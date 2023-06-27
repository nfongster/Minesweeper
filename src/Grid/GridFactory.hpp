#pragma once
#include "Grid.hpp"
#include "Difficulty.hpp"

class GridFactory  // There are no static classes in C++
{
    public:
        static Grid CreateGrid(Difficulty difficulty);
};