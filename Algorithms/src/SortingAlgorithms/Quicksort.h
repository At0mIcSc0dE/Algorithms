#include "pch.h"


void Swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}


int Partition(std::vector<int>& vec, int start, int end)
{
	int pIndex = start;
	int pivot = vec[end];
	for (int i = start; i < end; ++i)
	{
		if (vec[i] < pivot)
		{
			Swap(vec[i], vec[pIndex]);
			pIndex++;
		}
	}
	Swap(vec[end], vec[pIndex]);
	return pIndex;
}


std::vector<int> QuickSort(std::vector<int>& unsortedArr, int start, int end)
{

	if (start < end)
	{
		int pIndex = Partition(unsortedArr, start, end);
		QuickSort(unsortedArr, 0, pIndex - 1);
		QuickSort(unsortedArr, pIndex + 1, end);
	}

	return unsortedArr;
}