#ifndef __AQUICKSORT__
#define __AQUICKSORT__

namespace lobstone {
  /**
   * Prints out the contents of a vector
   */
  template<class T> void printVector(vector<T> a);
  /**
   * Uses Quicksort to sort a vector
   */
  template<class T> void sort(vector<T> &a);
  
}

#include "aQuickSort.cpp"

#endif
