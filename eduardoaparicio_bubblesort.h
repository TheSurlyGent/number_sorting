//Eduardo Aparicio
//PID:5645176
#pragma once
#include <iostream>
#include "eduardoaparicio_swap.h"

void BubbleSort(int arr[], int n) 
{
	for (int i = 0; i < n ; i++)
	{
		int flag = 0;
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)//break when sorted
		{
			break;
		}
	}
}