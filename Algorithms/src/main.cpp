#include "pch.h"

#include "SortingAlgorithms/BasicSort.h"
#include "SortingAlgorithms/SelectionSort.h"
#include "SortingAlgorithms/Quicksort.h"

#include "Problems/FindDuplicateAndMissingElementInArray.h"


#define LOG_ARRAY 1

std::ostream& operator<<(std::ostream& os, std::vector<int>& vec)
{
#if LOG_ARRAY
	for (const int& elem : vec)
	{
		std::cout << elem << ", ";
	}
#endif
	return os;
}
std::ostream& operator<<(std::ostream& os, std::unordered_set<int>& set)
{
#if LOG_ARRAY
	for (const int& item : set)
	{
		std::cout << item << ", ";
	}
#endif
	return os;
}


int main()
{
	std::vector<int> vec = { 4, 3, 6, 5, 2, 4 };
	//std::vector<int> unsortedVec;
	//for (int i = 0; i < 100000; ++i)
	//	unsortedVec.emplace_back(rand());

	Elements e = FindDuplicateAndMissingElementInArray(vec);
	std::cout << e.Duplicate << ", " << e.Missing << '\n';
}


