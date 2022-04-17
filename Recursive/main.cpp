
#include <iostream>
#include "MergeSort.h"
#include "QuickSort.hpp"
#include "RedixSort.h"

int main(int argc, const char * argv[]) {
    
    int x[] = {-1,45,12,-36,86,-95,424};
    int y[] = {-12,19,785,423,1235,-1980};
    int z[] = {85,42,13,1,7924,348};
    
    int n = sizeof(x)/sizeof(x[0]);
    int m = sizeof(y)/sizeof(y[0]);
    int p = sizeof(z)/sizeof(z[0]);
    /*
    //Merge sort implementation :
    MergeSort merge_obj(x,n);
    merge_obj.MergeSortfun(0,n-1);
    std::cout << "Merge Sort" <<std::endl;
    merge_obj.dispSorted();
    //Quick sort implementation :
    QuickSort quick_obj(y,m);
    quick_obj.QuickSortfun(0, m-1);
    std::cout << "Quick Sort" << std::endl;
    quick_obj.dispSorted();
    return 0;
    */
    RedixSort redix_obj(z,p);
    redix_obj.RedixSortfun();
    redix_obj.dispSort();
}
