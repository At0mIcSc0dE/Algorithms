#include "pch.h"

#include "SortingAlgorithms/BasicSort.h"
#include "SortingAlgorithms/SelectionSort.h"

#define LOG_ARRAY 0


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
	//std::vector<int> unsortedVec = { 5, 1, 2, 16, 44, 3, 11 };
	std::vector<int> unsortedVec;
	for (int i = 0; i < 100000; ++i)
		unsortedVec.emplace_back(rand());


	std::vector<int> sortedVec = SelectionSort(unsortedVec);

	std::cout << sortedVec << '\n';

}


