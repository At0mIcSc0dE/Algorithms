#include "pch.h"

std::vector<int> QuickSort(std::vector<int>& unsortedArr)
{
	TIMER;

	for (int i = 0; i < unsortedArr.size(); ++i)
	{
		unsigned int itemFromLeftIndex = 0;
		unsigned int itemFromRightIndex = unsortedArr.size() - 1;

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

		while (itemFromLeftIndex < itemFromRightIndex)
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
			for(int j = unsortedArr.size() - 2; j > -1; --j)
			{
				if (unsortedArr[j] < unsortedArr[unsortedArr.size() - 1])
				{
					itemFromRightIndex = j;
					break;
				}
			}

			if (itemFromLeftIndex > itemFromRightIndex)
			{
				break;
			}

			//Swap left and right value
			int itemFromLeft = unsortedArr[itemFromLeftIndex];
			unsortedArr[itemFromLeftIndex] = unsortedArr[itemFromRightIndex];
			unsortedArr[itemFromRightIndex] = itemFromLeft;

		}
		//Swap pivot and item from left
		int pivot = unsortedArr[unsortedArr.size() - 1];
		unsortedArr[unsortedArr.size() - 1] = unsortedArr[itemFromLeftIndex];
		unsortedArr[itemFromLeftIndex] = pivot;

		//Check if completed
		for (int j = 0; j <= itemFromLeftIndex; ++j)
		{
			if (unsortedArr[j] > unsortedArr[itemFromLeftIndex])
				continue;
		}

		for (int j = itemFromLeftIndex + 1; j < unsortedArr.size(); ++j)
		{
			if (unsortedArr[j] < unsortedArr[itemFromLeftIndex])
				continue;
		}
		break;

	}

	return unsortedArr;
}