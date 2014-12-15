
#include <iostream>
#include <vector>
using namespace std;
#include "aQuickSort.hpp"

template<class T> int partition(vector<T> &a, int start, int end);
template<class T> void quicksort(vector<T> &a, int start, int end);

template<class T> 
void lobstone::aQuickSort::printVector(vector<T> a) {
  for(int i = 0; i < a.size(); i++) {
    cout << i << ": " << a[i] << endl;
  }
  cout << endl;
}

template<class T>
void lobstone::aQuickSort::sort(vector<T> &a) {
  quicksort(a, 0, a.size() - 1);
}

/**
 * Recursive function for running partition()
 * @param vector<T> a Array to partition
 * @param int start: Starting index of the subarray
 * @param int end: Ending index of the subarray
 */
template<class T>
void quicksort(vector<T> &a, int start, int end) {
  if(start < end) {
    int split = partition(a, start, end);
    quicksort(a, start, split - 1);
    quicksort(a, split + 1, end);
  }
}

/**
 * Partitions an array based on a pivot value
 * @param vector<T> a Array to partition
 * @param int start: Starting index of the subarray
 * @param int end: Ending index of the subarray
 */
template<class T>
int partition(vector<T> &a, int start, int end) {
  T pivot = a[end]; // Choose pivot value
  int swapLoc = start; // Index of element to swap with

  for(int i = start; i < end; i++) {
    if(a[i] < pivot) {
      T tmp = a[i];
      a[i] = a[swapLoc];
      a[swapLoc] = tmp;
      swapLoc++;
    }
  }

  T tmp = a[end];
  a[end] = a[swapLoc];
  a[swapLoc] = tmp;

  return swapLoc;
}
