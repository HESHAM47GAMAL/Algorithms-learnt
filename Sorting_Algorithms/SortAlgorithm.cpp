#include "SortAlgorithm.h"


void Swap2elements(int * N1, int *N2)
{
    int temp = *N1 ;
    *N1 = *N2;
    *N2 = temp ;
}


void SelectionSort(int  T[] , int SizeR ,SortType As_Des)
{

    for(short i = 0 ; i <SizeR -1 ; i++) // loop before last element as this element used to next loop to check if
    {
        int indexOfMinV = i; // used to contain index that have minimum value
        if(As_Des == AscendingSort)
        {
            for(short  j = i+1 ; j < SizeR ; j++ )
            {
                if(T[j] <= T[indexOfMinV]) //if any element have lower value than  current element in outer loop  will store @ indexOfMinV
                {
                    indexOfMinV = j;
                }
            }
        }
        else if(As_Des == DescendingSort)
        {
            for(short  j = i+1 ; j < SizeR ; j++ )
            {
                if(T[j] >= T[indexOfMinV]) //if any element have lower value than  current element in outer loop  will store @ indexOfMinV
                {
                    indexOfMinV = j;
                }
            }
        }
        Swap2elements(&T[indexOfMinV] , &T[i]); // swap minimax value that have index @ indexOfMinV with index of outer array
    }
}


void BubbleSort(int T[] , int SizeR ,SortType As_Des)
{
    for(short i = 1 ; i < SizeR  ; i++)
    {
       Bool IsSwapped  = False ;
       if(As_Des == AscendingSort)
       {
           for(short j = 0 ; j < SizeR - i ; j++ )
           {
               if(T[j] >=  T[j+1])
               {
                   Swap2elements(&T[j] , &T[j+1]);
                   IsSwapped = True;
               }
           }
       }
       else if(As_Des == DescendingSort)
       {
           for(short j = 0 ; j < SizeR - i ; j++ )
           {
               if(T[j] <=  T[j+1])
               {
                   Swap2elements(&T[j] , &T[j+1]);
                   IsSwapped = True;
               }
           }
       }
       if(IsSwapped == False)
        break;

    }
}


void InsertionSort(int T[] , int SizeR ,SortType As_Des)
{
    for(short i = 1 ; i < SizeR ; i++ )
    {
        int value = T[i];
        short hole = i;
        if(As_Des == AscendingSort)
        {
            while(hole > 0  && T[hole - 1] >= value)
            {
                T[hole] = T[hole - 1];
                hole--;
            }
        }
        else if(As_Des == DescendingSort)
        {
            while(hole > 0  && T[hole - 1] <= value)
            {
                T[hole] = T[hole - 1];
                hole--;
            }
        }
        T[hole] = value ;

    }
}

void MergeSort(int T[] , int L, int R ,SortType As_Des)
{
    if(L < R)
    {
        int Mid = L + (R - L)/2;
        MergeSort(T  , L , Mid , As_Des);
        MergeSort(T , Mid + 1 , R ,As_Des);
        Merge(T , L , Mid , R, As_Des);
    }
}

void Merge(int T[] , int L, int Mid , int R ,SortType As_Des)
{
    int i , j , k ;

    int Lsize = Mid - L + 1 ;
    int Rsize = R - Mid;

    int LTemp[Lsize] , RTemp[Rsize];

    for(i = 0 ; i < Lsize ; i++)
    {
        LTemp[i] = T[L + i];
    }
    for( j = 0 ; j < Rsize ; j++)
    {
        RTemp[j] = T[Mid + 1 + j];
    }

    i = 0 ;
    j = 0 ;
    k = L ;
    if(As_Des == AscendingSort)
    {
        while( i < Lsize && j < Rsize)
        {
            if(LTemp[i] <= RTemp[j])
            {
               T[k++] = LTemp[i++] ;
            }
            else if(RTemp[j] < LTemp[i])
            {
                T[k++] = RTemp[j++];
            }
        }
    }
    else if(As_Des == DescendingSort)
    {
       while( i < Lsize && j < Rsize)
        {
            if(LTemp[i] >= RTemp[j])
            {
               T[k++] = LTemp[i++] ;
            }
            else if(RTemp[j] > LTemp[i])
            {
                T[k++] = RTemp[j++];
            }
        }
    }
    while(i < Lsize)
    {
        T[k++] = LTemp[i++] ;
    }
    while(j < Rsize)
    {
        T[k++] = RTemp[j++];
    }
}


void QuickSort(int T[] , int L , int R ,SortType As_Des)
{
    if(L < R)
    {
        int Pivot = Parition(T, L , R , As_Des);
        QuickSort(T , L , Pivot - 1 ,As_Des);
        QuickSort(T , Pivot + 1 , R ,As_Des);
    }
}

int Parition(int T[] , int L, int R ,SortType As_Des)
{
    int PivotV = T[R] ; // take most right as pivot
    int rankStartIndex = L;
    if(As_Des == AscendingSort)
    {
        for(short i = L ; i < R ; i++)
        {
            if(T[i] <=PivotV)
            {
                Swap2elements(&T[i],&T[rankStartIndex]);
                rankStartIndex++;
            }
        }
    }
    else if(As_Des == DescendingSort)
    {
        for(short i = L ; i < R ; i++)
        {
            if(T[i] >=PivotV)
            {
                Swap2elements(&T[i],&T[rankStartIndex]);
                rankStartIndex++;
            }
        }
    }
    Swap2elements(&T[R],&T[rankStartIndex]);

    return rankStartIndex;
}


int LinearSearch(int T[] ,int SizeR,int Value , FindType F_B)
{
    if(F_B == FindFront)
    {
        for(int i = 0 ; i < SizeR ;i++)
        {
            if(T[i] == Value)
                return i;
        }
    }
    else if(F_B == FindBack)
    {
        for(int i = SizeR -1 ; i >= 0 ;i++)
        {
            if(T[i] == Value)
            {
                return i;
            }
        }
    }
    return -1;
}

