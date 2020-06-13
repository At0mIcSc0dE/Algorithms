#include "pch.h"

#include "SortingAlgorithms/BasicSort.h"
#include "SortingAlgorithms/SelectionSort.h"
#include "SortingAlgorithms/Quicksort.h"

#define LOG_ARRAY 1


std::ostream& operator<<(std::ostream& os, std::vector<int>& vec)
{
	#if LOG_ARRAY
		for (int& elem : vec)
		{
			std::cout << elem << ", ";
		}
	#endif
	return os;
}


int main()
{
	std::vector<int> unsortedVec = { 2, 6, 5, 3, 8, 7, 1, 0 };
	//std::vector<int> unsortedVec;
	//for (int i = 0; i < 100000; ++i)
	//	unsortedVec.emplace_back(rand());


	std::vector<int> sortedVec = QuickSort(unsortedVec);

	std::cout << sortedVec << '\n';

}


