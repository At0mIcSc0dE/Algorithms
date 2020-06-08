/*
File which includes BasicSort algorithm.
Algorithm is faster for smaller arrays compared to SelectionSort but a lot slower with larger ones.
(Switch from faster to slower happens at around 1000 elements (Release Mode).)
*/

#pragma once

#include "pch.h"


std::vector<int>& BasicSort(std::vector<int>& arr)
{
	{
		TIMER;
		for (unsigned int i = 0; i < arr.size(); ++i)
		{
			for (unsigned int j = i + 1; j < arr.size(); ++j)
			{
				if (arr[i] > arr[j])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	return arr;
}
