/*
File which includes the SelectionSort algorithm and the GetMinIndexInVec function.
Algorithm is slower than BasicSort with small arrays, but almost double the speed of the BasicSort with larger arrays.
(Switch from slower to faster happens at around 1000 elements (Release Mode).)
*/

#pragma once

#include "pch.h"


int GetMinIndexInVec(const std::vector<int>& vec)
{
	int minVal = -1;
	int minValIndex = -1;

	for (unsigned int j = 0; j < vec.size(); ++j)
	{
		if (minVal != -1)
		{
			if (vec[j] < minVal)
			{
				minVal = vec[j];
				minValIndex = j;
			}
		}
		else
		{
			minVal = vec[0];
			minValIndex = 0;
		}
	}
	return minValIndex;
}


std::vector<int> SelectionSort(std::vector<int>& unsortedArr)
{
	std::vector<int> sortedArr;
	{
		TIMER;
		unsigned int IndexOfMinVal;
		size_t arrSize = unsortedArr.size();

		for (unsigned int i = 0; i < arrSize; ++i)
		{
			//Get index of minimum value
			//IndexOfMinVal = std::min_element(unsortedArr.begin(), unsortedArr.end()) - unsortedArr.begin();
			IndexOfMinVal = GetMinIndexInVec(unsortedArr);

			sortedArr.insert(sortedArr.begin() + i, unsortedArr[IndexOfMinVal]);
			unsortedArr.erase(unsortedArr.begin() + IndexOfMinVal);
		}
	}
	return sortedArr;
}
