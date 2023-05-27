//Eduardo Aparicio
//PID:5645176
#pragma once
#include <iostream>
#include "eduardoaparicio_swap.h"

void SelectionSort(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		int min, j;
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		swap(arr[min], arr[i]);
	}
}