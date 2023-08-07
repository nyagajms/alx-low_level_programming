#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees a 2D array of ints previously
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
