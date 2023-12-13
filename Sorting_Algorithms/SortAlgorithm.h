#ifndef SORTALGORITHM_H_INCLUDED
#define SORTALGORITHM_H_INCLUDED

typedef enum {True  , False} Bool;

/**
 * @brief Represents data type that tell any function of sort which type of sorting want "Ascending" OR "Descending" .
 */
typedef enum {AscendingSort , DescendingSort } SortType ;


typedef enum { FindFront , FindBack }FindType;



/**
 * Brief description :this function swap two variables using pointer .
 *
 * @param param1 :pointer to first element.
 * @param param2 :pointer to second element.
 * @return Void.
 */
void Swap2elements(int * , int *);


/**
 * Brief description :this function Apply sort algorithm of type Selection .
 *
 * @param param1 :pointer to first element of array will sort.
 * @param param2 :contain size of array.
 * @param param3 :contain type of sorting ("Ascending" , "Descending").
 * @return Void.
 */
void SelectionSort(int  [] , int  ,SortType );

/**
 * Brief description :this function Apply sort algorithm of type Bubble .
 * More detailed description, in This sort guarantee that at end of inner loop last element in array is largest element if Ascending sort,
 or is smallest element if descending sort and in second loop same thing happen for element before last element in array and keep same pattern .
 *
 * @param param1 :pointer to first element of array will sort.
 * @param param2 :contain size of array.
 * @param param3 :contain type of sorting ("Ascending" , "Descending").
 * @return Void.
 */
void BubbleSort(int [] , int ,SortType );

/**
 * Brief description :this function Apply sort algorithm of type Insertion .
 *
 * @param param1 :pointer to first element of array will sort.
 * @param param2 :contain size of array.
 * @param param3 :contain type of sorting ("Ascending" , "Descending").
 * @return Void.
 */
void InsertionSort(int [] , int ,SortType );

/**
 * Brief description :this function Apply sort algorithm of type Merge .
 * More detailed description, which here get mid index and call itself until reach two or one element want to sort and call merge function.
 *
 * @param param1 :pointer to first element of array will sort.
 * @param param2 :start index of array want to sort.
 * @param param3 :end index of array want to sort.
 * @param param4 :contain type of sorting ("Ascending" , "Descending").
 * @return Void.
 */
void MergeSort(int [] , int , int ,SortType);

/**
 * Brief description :here happen actual sorting in this algorithm .
 *
 * @param param1 :pointer to first element of array will sort.
 * @param param2 :start index of array want to sort.
 * @param param3 :mid index of array want to sort.
 * @param param4 :end index of array want to sort.
 * @param param5 :contain type of sorting ("Ascending" , "Descending").
 * @return Void.
 */
void Merge(int [] , int , int , int ,SortType);

/**
 * Brief description :this function Apply sort algorithm of type Quick .
 *
 * @param param1 :pointer to first element of array will sort.
 * @param param2 :start index of array want to sort.
 * @param param3 :end index of array want to sort.
 * @param param4 :contain type of sorting ("Ascending" , "Descending").
 * @return Void.
 */
void QuickSort(int [] , int , int ,SortType);

/**
 * Brief description :this function Apply sort algorithm of type Quick .
 *
 * @param param1 :pointer to first element of array will sort.
 * @param param2 :start index of array want to sort.
 * @param param3 :end index of array want to sort.
 * @param param4 :contain type of sorting ("Ascending" , "Descending").
 * @return mid index that all element left it is smaller and right it is bigger OR left it is bigger and right it is smaller .
 */
int Parition(int [] ,  int , int ,SortType);


/**
 * Brief description :this function used to check if specific value exist in this array .
 *
 * @param param1 :pointer to first element of array .
 * @param param2 :number of element in array.
 * @param param3 :value want to check if exist.
 * @param param4 :type of search as search from first of array "FindFront" OR search from last of array "FindBack".
 * @return index of value if found OR -1 if not found.
 */
int LinearSearch(int [] ,int ,int , FindType );

#endif // SORTALGORITHM_H_INCLUDED
