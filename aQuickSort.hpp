#ifndef __AQUICKSORT__
#define __AQUICKSORT__

namespace lobstone {
  class aQuickSort {
  public:
    /**
     * Prints out the contents of a vector
     */
    template<class T> static void printVector(vector<T> a);

    /**
     * Uses Quicksort to sort a vector
     */
    template<class T> static void sort(vector<T> &a);
  };
}

#include "aQuickSort.cpp"

#endif
