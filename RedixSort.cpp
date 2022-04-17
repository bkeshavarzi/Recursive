//
//  RedixSort.cpp
//  Recursive
//
//  Created by Behrooz Keshavarzi on 4/16/22.
//

#include <stdio.h>
#include "RedixSort.h"

RedixSort::RedixSort(int * ar, int len)
{
    x = new int [len];
    n=len;
    setArray(ar);
}
void RedixSort::setArray(int * ar)
{
    for (int i=0;i<n;i++) x[i]=ar[i];
}
int RedixSort::getMax()
{
    int maxVal = x[0];
    
    for (int i=1;i<n;i++)
    {
        if (x[i]>maxVal) maxVal = x[i];
    }
    
    return maxVal;
}

void RedixSort::RedixSortfun()
{
    int maxVal = getMax();
    
    for (int exp = 1; maxVal/exp > 0; exp*=10)
    {
        countSort(exp);
    }
}
void RedixSort::countSort(int exp)
{
    int output[n];
    int i, count[10]={0}, rm;
    
    for (i=0;i<n;i++) count[(x[i]/exp)%10]++;
    for (i=1;i<10;i++) count[i]+=count[i-1];
    for (i=n-1;i>=0;i--)
    {
        rm = count[(x[i]/exp)%10];
        output[rm-1]=x[i];
        count[(x[i]/exp)%10]--;
    }
    for (i=0;i<n;i++) x[i] = output[i];
}
void RedixSort::dispSort()
{
    std::cout << "Sort result" <<std::endl;
    for (int i=0;i<n;i++) std::cout << x[i] <<std::endl;
}
