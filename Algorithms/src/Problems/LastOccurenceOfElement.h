#pragma once

#include "pch.h"


int LastOccurenceOfElement(std::vector<int>& vec, const int& element)
{
	int foundElementIndex = -1;
	for (int i = 0; i < vec.size(); ++i)
	{
		if (vec[i] == element)
			foundElementIndex = i;
	}

	return foundElementIndex;
}
