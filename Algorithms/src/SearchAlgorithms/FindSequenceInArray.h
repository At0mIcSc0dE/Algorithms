/*
* This search algorithm will try to find the best result for a repeating sequence:
* E.g. {1, 6, 3, 6, 89, 2} in another array {1, 6, 5, 23, 3, 6, 89, 55, 2, 2}.
* It will return the beginning and ending index of the found array1 in array2
* It will only not find anything, if one of the values in array1 is not present in array2
*/

#pragma once

#include "pch.h"


std::pair<int, int> FindSequenceInArray(const std::vector<int>& sequence, const std::vector<int>& vec)
{
	for (int i = 0; i < vec.size(); ++i)
	{
		int startingIndex = -1;
		if (sequence[0] == vec[i])
		{
			startingIndex = i;
			break;
		}
	}
}

