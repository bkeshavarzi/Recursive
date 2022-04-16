//
//  QuickSort.hpp
//  Recursive
//
//  Created by Behrooz Keshavarzi on 4/16/22.
//

#ifndef QuickSort_hpp
#define QuickSort_hpp

#include <stdio.h>
#include <iostream>

class QuickSort
{
public:
    QuickSort(int*,int);
    void setArray(int *, int);
    void QuickSortfun(int,int);
    int  partion(int,int);
    void partionArray(int,int);
    void dispSorted();
private:
    int * x;
    int n;
};
#endif /* QuickSort_hpp */
