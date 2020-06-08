#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <memory>
#include <chrono>
#include <functional>
#include <algorithm>
#include <array>
#include <random>

#include "Timer.h"


#pragma region Functions

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
#pragma endregion


#pragma region Operator<<

std::ostream& operator<<(std::ostream& os, std::vector<int>& vec)
{
	for (int& elem : vec)
	{
		std::cout << elem << ", ";
	}
	return os;
}

#pragma endregion



#pragma region SelectionSort

std::vector<int> SelectionSort(std::vector<int>& unsortedArr)
{
	std::vector<int> sortedArr;
	{
		TIMER;
		unsigned int IndexOfMinVal;
		unsigned int arrSize = unsortedArr.size();

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

#pragma endregion


#pragma region SimpleSort

std::vector<int>& SimpleSort(std::vector<int>& arr)
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
#pragma endregion


int main()
{
	//std::vector<int> unsortedVec = { 5, 1, 2, 16, 44, 3, 11 };
	std::vector<int> unsortedVec;
	for (int i = 0; i < 10000; ++i)
		unsortedVec.emplace_back(rand());


	std::vector<int> sortedVec = SelectionSort(unsortedVec);	//413ms		//213ms

	std::cout << sortedVec << '\n';

	//int minvalindex = GetMinIndexInVec({ 5, 2, 8, 1, 6 });
	//std::cout << minvalindex << '\n';

}


