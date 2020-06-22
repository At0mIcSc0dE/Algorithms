#include "pch.h"

#include "SortingAlgorithms/BasicSort.h"
#include "SortingAlgorithms/SelectionSort.h"
#include "SortingAlgorithms/Quicksort.h"

#include "Problems/FindDuplicateAndMissingElementInArray.h"
#include "Problems/SmallestValueRepeatedKTimes.h"

#include "SearchAlgorithms/BinarySearch.h"
#include "SearchAlgorithms/FindSequenceInArray.h"

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
	std::vector<int> seq = { 1, 2, 3 };
	std::vector<int> vec = { 1, 1, 2, 5, 3, 6, 34, 6 };
	//std::vector<int> vec;
	//for (int i = 0; i < 100000; ++i)
		//vec.emplace_back(rand());

	std::pair<int, int> result = FindSequenceInArray(seq, vec);
	std::cout << result.first << ", " << result.second << '\n';
}


