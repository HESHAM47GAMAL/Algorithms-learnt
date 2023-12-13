#include <iostream>

#include <assert.h>
#include "SortAlgorithm.h"



/**
 * Brief description :this function Display Array .
 *
 * @param param1 :pointer to first element of array .
 * @param param2 :contain size of array.
 * @return Void.
 */
void DisplayR (int [] , int );

int main()
{
    int R[]= {70,50,30,10,20,40,60};
//    int R[]= {2,7,4,1,5,3};
    int SizeOfR = sizeof(R) /sizeof(R[0]);

    SelectionSort(R , SizeOfR , AscendingSort);
    std::cout <<  "Sorted array Ascending by Selection : "  , DisplayR(R,SizeOfR);
    SelectionSort(R , SizeOfR , DescendingSort);
    std::cout <<  "\nSorted array Descending by Selection : "  , DisplayR(R,SizeOfR);

    BubbleSort(R , SizeOfR, AscendingSort);
    std::cout <<  "\n\nSorted array Ascending by Bubble : "  , DisplayR(R,SizeOfR);
    BubbleSort(R , SizeOfR, DescendingSort);
    std::cout <<  "\nSorted array Descending by Bubble : "  , DisplayR(R,SizeOfR);

    InsertionSort(R , SizeOfR, AscendingSort);
    std::cout <<  "\n\nSorted array Ascending by Insertion : "  , DisplayR(R,SizeOfR);
    InsertionSort(R , SizeOfR, DescendingSort);
    std::cout <<  "\nSorted array Descending by Insertion : "  , DisplayR(R,SizeOfR);

    MergeSort(R , 0 , SizeOfR - 1 , AscendingSort);
    std::cout <<  "\n\nSorted array Ascending by Merge : "  , DisplayR(R,SizeOfR);
    MergeSort(R , 0 , SizeOfR - 1, DescendingSort);
    std::cout <<  "\nSorted array Descending by Merge : "  , DisplayR(R,SizeOfR);

    QuickSort(R , 0 , SizeOfR - 1 ,AscendingSort );
    std::cout <<  "\n\nSorted array Ascending by Quick : "  , DisplayR(R,SizeOfR);
    QuickSort(R , 0 , SizeOfR - 1, DescendingSort);
    std::cout <<  "\nSorted array Descending by Quick : "  , DisplayR(R,SizeOfR);


    std::cout << "\n\n";
    return 0;
}

void DisplayR (int T[] , int sizeR)
{
    for(short i = 0 ; i < sizeR ;i++)
    {
        std::cout <<T[i] << " ";
    }
}

