#pragma once

#define GRID_WIDTH 12
#define GRID_HEIGHT 10 
class Grid
{
public:
	Grid();
	Grid(int grid[GRID_WIDTH][GRID_HEIGHT]);
	~Grid();



private:
	int grid[GRID_WIDTH][GRID_HEIGHT];

};

