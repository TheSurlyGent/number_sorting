//Eduardo Aparicio
//PID:5645176
#pragma once
#include <iostream>
#include "eduardoaparicio_swap.h"

void InsertionSort(int array[],int n)
{
	for (int i = 0; i < n ; i++)
	{
		int value = array[i];
		int space = i;
		while (space > 0 && array[space - 1] > value)
		{
			array[space] = array[space - 1];
			space = space - 1;
		}
		array[space] = value;
	}
}
