#pragma once

#include "pch.h"


int BinarySearch(std::vector<int>& vec, const int& searchedElement)
{
	//Array needs to be sorted for binary search
	std::sort(vec.begin(), vec.end());

	int lowBound = 0;
	int highBound = (int)vec.size() - 1;

	while (lowBound <= highBound)
	{
		int mid = (lowBound + highBound) / 2;
		if (vec[mid] < searchedElement)
		{
			lowBound = mid + 1;
		}
		else if (vec[mid] > searchedElement)
		{
			highBound = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
