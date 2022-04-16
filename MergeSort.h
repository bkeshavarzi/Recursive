//
//  MergeSort.h
//  Recursive
//
//  Created by Behrooz Keshavarzi on 4/16/22.
//

#ifndef MergeSort_h
#define MergeSort_h
#include <iostream>

class MergeSort
{
public:
    MergeSort(int*,int);
    void setArray(int *,int);
    void MergeSortfun(int,int);
    void MergeArrays(int,int,int);
    void dispSorted();
private :
    int * x;
    int n;
};

#endif /* MergeSort_h */
