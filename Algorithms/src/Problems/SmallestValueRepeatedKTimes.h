#pragma once

#include "pch.h"


int FindSmallestValueRepeatedKTimes(std::vector<int>& vec, const int& k)
{
	{
		TIMER;

		std::sort(vec.begin(), vec.end());
		for (int i = 0; i < vec.size(); ++i)
		{
			if ((double)k - 1 + i < vec.size()) {
				if (vec[i] == vec[k - 1 + i])
					return vec[i];
			}
		}
	}
	return -1;
}
