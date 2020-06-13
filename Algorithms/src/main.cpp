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


int GetPivot(std::vector<int>& unsortedArr)
{
	//Select pivot and move swap unsortedArr[unsortedArr.size() - 1] with pivot
	int firstElement = unsortedArr[0];
	int middleElement = unsortedArr[unsortedArr.size() / 2];
	int lastElement = unsortedArr[unsortedArr.size() - 1];


	//If first element is pivot, move it to end
	if ((firstElement > middleElement && firstElement < lastElement) || (firstElement < middleElement && firstElement > lastElement))
	{
		unsortedArr[unsortedArr.size() - 1] = firstElement;
		unsortedArr[0] = lastElement;
	}
	//If the middle element if pivot, move it to end
	else if ((middleElement > firstElement && middleElement < lastElement) || (middleElement < firstElement && middleElement > lastElement))
	{
		unsortedArr[unsortedArr.size() - 1] = middleElement;
		unsortedArr[unsortedArr.size() / 2] = lastElement;
	}
	return unsortedArr[unsortedArr.size() - 1];
}


int main()
{
	//std::vector<int> unsortedVec = { 2, 6, 5, 3, 8, 7, 1, 0 };
	std::vector<int> unsortedVec = { 3, 5, 2, 1 };
	//std::vector<int> unsortedVec;
	//for (int i = 0; i < 100000; ++i)
	//	unsortedVec.emplace_back(rand());


	std::vector<int> sortedVec = QuickSort(unsortedVec);

	//std::vector<int> vec = { 1, 2, 3, 5 };
	//std::cout << GetPivot(vec);

	std::cout << sortedVec << '\n';

}


