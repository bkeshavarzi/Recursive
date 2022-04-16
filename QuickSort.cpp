//
//  QuickSort.cpp
//  Recursive
//
//  Created by Behrooz Keshavarzi on 4/16/22.
//

#include "QuickSort.hpp"

QuickSort::QuickSort(int * ar, int len)
{
    x = new int[len];
    setArray(ar,len);
    n=len;
}
void QuickSort::setArray(int * ar, int len)
{
    for (int i = 0; i < len ; i++) x[i] = ar[i];
}
void QuickSort::QuickSortfun(int b, int e)
{
    if (b>=e) return;
    
    int p = partion(b,e);
    
    QuickSortfun(b, p-1);
    QuickSortfun(p+1, e);
}
int QuickSort::partion(int s, int e)
{
    int pivot_element = x[s], count = 0, temp;
    
    for (int i = s + 1; i <= e; i++)
    {
        if (x[i] <= x[s]) count++;
    }
    
    int pivot_index = count + s ;
    
    std::swap(x[pivot_index],x[s]);
    
    int i = s, j =e;
    while (i < pivot_index && j > pivot_index)
    {
        while (x[i] <= pivot_element) i++;
        while (x[j] >= pivot_element) j--;
        if (i < pivot_index && j > pivot_index) std::swap(x[i++],x[j--]);
    }
    return pivot_index;
}
void QuickSort::dispSorted()
{
    std::cout << "Sorted array is" << std::endl;
    for (int i=0;i<n;i++) std::cout<<x[i]<< " " ;
}
