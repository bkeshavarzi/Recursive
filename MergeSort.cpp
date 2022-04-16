//
//  MergeSort.cpp
//  Recursive
//
//  Created by Behrooz Keshavarzi on 4/16/22.
//

#include <stdio.h>
#include "MergeSort.h"

MergeSort::MergeSort(int * ar, int len)
{
    setArray(ar,len);
    n = len;
}
void MergeSort::setArray(int * ar, int len)
{
    x = new int[len];
    for (int i = 0; i < len ; i++) x[i] = ar[i];
}
void MergeSort::MergeSortfun(int b, int e)
{
    if (b>=e) return;
    int m = (b+e)/2;
    MergeSortfun(b, m);
    MergeSortfun(m+1, e);
    MergeArrays(b,m,e);
}
void MergeSort::MergeArrays( int l, int m, int r)
{
    
    int left_len  = m - l + 1;
    int right_len = r - m;
    
    int index_left = 0, index_right = 0;
    int index_merge = l;
    
    int * left_array  =  new int[left_len];
    int * right_array =  new int[right_len];
    
    for (int i = 0; i < left_len  ; i++) left_array[i]  = x[l+i];
    for (int i = 0; i < right_len ; i++) right_array[i] = x[m+i+1];
    
    while (index_left < left_len && index_right < right_len)
    {
        if ( left_array[index_left] <= right_array[index_right] )
        {
            x[index_merge] = left_array[index_left];
            index_merge++;
            index_left++;
        }
        else
        {
            x[index_merge] = right_array[index_right];
            index_merge++;
            index_right++;
        }
    }
    
    while (index_left < left_len)
    {
        x[index_merge++] = left_array[index_left++];
    }
    while (index_right < right_len)
    {
        x[index_merge++] = right_array[index_right++];
    }
    
    delete [] left_array;
    delete [] right_array;
}
 void MergeSort::dispSorted()
{
     std::cout << "Sorted array is :";
     for (int i =0; i < n; i++) std::cout << x[i] << " ";
}


