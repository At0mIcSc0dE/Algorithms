#pragma once

#include "pch.h"

struct Elements
{
	//std::vector<int> Duplicate = {};
	std::unordered_set<int> Duplicate = {};
	std::unordered_set<int> Missing = {};
};



Elements FindDuplicateAndMissingElementInArray(std::vector<int>& vec)
{
	Elements e;
	for (int i = 0; i < vec.size(); ++i)
	{
		bool IsFound = false;
		for (int j = 0; j < vec.size(); ++j)
		{
			//Duplicate
			if (vec[j] == vec[i] && i != j)
			{
				e.Duplicate.insert(vec[j]);
			}

			//Missing
			if (i == vec[j] and !IsFound)
			{
				IsFound = true;
			}
		}
		if (!IsFound)
		{
			e.Missing.insert(i);
		}

	}


	return e;

}

