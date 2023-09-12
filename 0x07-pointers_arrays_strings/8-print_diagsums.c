#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of intergers.
 * @a: the matrix of intergers.
 * @size: the size of the matriz.
 */
void print_diagsums(int *a, int size)
{
	int index, sum1 = 0, sums2 = 0;

	for (index = 0; index < size; index++)
	{

