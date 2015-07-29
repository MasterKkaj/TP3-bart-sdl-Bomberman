#include "Grid.h"


Grid::Grid()
{
}

Grid::Grid(int grid[GRID_WIDTH][GRID_HEIGHT])
{
	for (int i = 0; i < GRID_WIDTH; i++)
	{
		for (int j = 0; j < GRID_HEIGHT; j++)
		{
			this->grid[i][j] = grid[i][j];
		}
	}
}

Grid::~Grid()
{
}
