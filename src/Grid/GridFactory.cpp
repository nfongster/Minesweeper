#include "GridFactory.hpp"
#include "Grid.hpp"

Grid GridFactory::CreateGrid(Difficulty difficulty)
{
    switch (difficulty)
    {
        case Beginner: default:
            return Grid(9, 9, 10);
        case Intermediate:
            return Grid(16, 16, 40);
        case Expert:
            return Grid(16, 30, 99);
    }
}