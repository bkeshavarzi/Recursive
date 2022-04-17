//
//  RedixSort.h
//  Recursive
//
//  Created by Behrooz Keshavarzi on 4/16/22.
//

#ifndef RedixSort_h
#define RedixSort_h
#include <iostream>

class RedixSort
{
public:
    RedixSort(int*,int);
    void setArray(int*);
    void RedixSortfun();
    int getMax();
    void countSort(int);
    void dispSort();
private:
    int * x;
    int n;
};

#endif /* RedixSort_h */
