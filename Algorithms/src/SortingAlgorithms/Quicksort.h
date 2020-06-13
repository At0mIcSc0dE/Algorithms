#include "pch.h"


#define PIVOTINDEX unsortedArr.size() - 1

std::vector<int> QuickSort(std::vector<int>& unsortedArr)
{
	TIMER;
	unsigned int itemFromLeftIndex = 0;
	unsigned int itemFromRightIndex = 0;

	for (int i = 0; i < unsortedArr.size(); ++i)
	{
		//Select pivot and move swap unsortedArr[unsortedArr.size() - 1] with pivot
		int firstElement = unsortedArr[0];
		int middleElement = unsortedArr[unsortedArr.size() / 2];
		int lastElement = unsortedArr[unsortedArr.size() - 1];

		if ((firstElement > lastElement && firstElement < middleElement) || (firstElement < lastElement && firstElement > middleElement))
		{
			unsortedArr[unsortedArr.size() / 2] = firstElement;
			unsortedArr[0] = middleElement;
		}
		else if ((middleElement > lastElement && middleElement < firstElement) || (middleElement < lastElement && middleElement > firstElement))
		{
			unsortedArr[unsortedArr.size() / 2] = lastElement;
			unsortedArr[unsortedArr.size() - 1] = middleElement;
		}

		if (itemFromLeftIndex < itemFromRightIndex)
		{
			//Item from left that is larger than the pivot
			for (int j = 0; j < unsortedArr.size(); ++j)
			{
				if (unsortedArr[j] > unsortedArr[unsortedArr.size() - 1])
				{
					itemFromLeftIndex = j;
					break;
				}
			}

			//Item from right that is smaller than the pivot
			for(int j = unsortedArr.size() - 1; j > 0; --j)
			{
				if (unsortedArr[j] < unsortedArr[unsortedArr.size() - 1])
				{
					itemFromRightIndex = j;
					break;
				}
			}
		}
		//Swap pivot and item from left
		else
		{
			int pivot = unsortedArr[unsortedArr.size() - 1];
			unsortedArr[unsortedArr.size() - 1] = unsortedArr[itemFromLeftIndex];
			unsortedArr[itemFromLeftIndex] = pivot;
		}


	}

	return { unsortedArr[itemFromLeftIndex], (int)itemFromLeftIndex };
}